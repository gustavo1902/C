

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.c>
#define LARG 50
#define COMP 20
#define MAX 50

typedef struct{
	char nome[30];
	char tele[12];
	char celu[12];
	char obse[50];
	int id;
}Dados;

typedef struct{
	Dados vet[MAX];
	int qtde;
	int opt;
}Base;

void LinhaSup(){
	int i;
	printf("%c", 201);
	for(i = 0; i < LARG; i++){
		printf("%c", 205);
	}
	printf("%c", 187);
	
}

void LinhaInf(){
	int i;
	printf("\n");
	printf("%c", 200);
	for(i = 0; i < LARG; i++){
		printf("%c", 205);
	}
	printf("%c", 188);
}

void Vazia(){
	int i;
	printf("\n%c", 186);
	for( i= 0; i < LARG; i++){
		printf("%c", 32);
	}
	printf("%c", 186);
}

void Quadro(int x){
	int i;
	LinhaSup();
	for(i = 0; i < x; i++){
		Vazia();
	}
	LinhaInf();
}

void TelaInic(){
	int i;
	Quadro(COMP);
	gotoxy(15, 10);
	printf("AGEGNDA TELEFONICA");			
	gotoxy(30, 19);
	printf("BY Jailson Athayde");
	gotoxy(3, 25);	
	system("pause");
	system("cls");
}

void Menu(){
	int i;	
	Quadro(COMP);
	gotoxy(15,3);printf("MENU PRINCIPAL");
	gotoxy(10,6);printf("(1)CADASTRAR");
	gotoxy(10,8);printf("(2)PESQUISAR");
	gotoxy(10,10);printf("(3)LISTAR");
	gotoxy(10,12);printf("(4)DELETAR");
	gotoxy(10,14);printf("(5)SAIR");
	gotoxy(2,22);
	printf("\n\nSELECIONE UMA OPCAO\n");
}

int Validar(){
	system("cls");
	Menu();
	fflush(stdin);
	char tent; int op;
	scanf("%c", &tent);
	op = tent - 48;
	while(op < 1 || op > 5){
		printf("OPCAO INVALIDA\nAPERTE ENTER E ESCOLHA UMA OPCAO VALIDA:");
		getch();
		op = Validar();
	}
	return op;
}

int Cadastrar(Base *b, Dados *d){
	FILE * pont;
	pont = fopen("agenda.txt", "ab");
	if(pont == NULL){
		printf("ERRO!!\nFECHANDO O PROGRAMA!");
		return(1);
	}
	int i, pos;
	pos = b->qtde;
	fflush(stdin);
	system("cls");
	Quadro(5);
	gotoxy(10,3);
	printf("CADASTRANDO CONTATOS");
	gotoxy(2,7);
	printf("\nINFORME O NOME DO CONTATO: ");
	fgets(d->nome, 30, stdin);
	printf("\nINFORME O TELEFONE DO CONTATO: ");
	fgets(d->tele, 30, stdin);
	printf("\nINFORME O CELULAR DO CONTATO: ");
	fgets(d->celu, 30, stdin);
	printf("\nINFORME OBSERVACAO IMPORTANTE DO CONTATO: ");
	fgets(d->obse, 30, stdin);
	d->id = b->qtde+1;
	b->vet[pos] = *d;
	b->qtde++;
	fwrite(b, sizeof(Base), 1, pont);
	system("cls");
	Quadro(5);
	gotoxy(10,3);
	printf("CONTATO SALVO COM SUCESSO!\n");
	gotoxy(3, 8);
	system("pause");
	fclose(pont);
}


int Listar(Base *b, Dados *d){
	FILE * pont;
	pont = fopen("agenda.txt", "rb");
	if(pont == NULL){
		printf("ERRO!!\nFECHANDO O PROGRAMA!");
		return(1);
	}
	int i;
	system("cls");	
	if(b->qtde == 0){
		Quadro(5);
		gotoxy(10,3);
		printf("NENHUM CONTATO CADASTRADO!");
		gotoxy(3,8);		
	}else{
		Quadro(5);
		gotoxy(10,3);
		printf("CONTATOS SALVOS!");
		gotoxy(3,8);
		while(fread(b, sizeof(Base), 1, pont) == 1){
		for(i = 0;i < b->qtde; i++)
		printf("\nNOME: %s\nTELEFONE: %s\nCELULAR: %s\nOBS: %s\nCADASTRO No: %d\n",b->vet[i].nome, b->vet[i].tele, b->vet[i].celu,b->vet[i].obse, b->vet[i].id) ;
		}
	}
	fclose(pont);	
	system("pause");	
}

void Controle(Base *b, Dados *d){
	int i;
	do{
		b->opt = Validar();
		switch(b->opt){
			case 1:
				Cadastrar(b, d);
			break;
			case 2:
				//Pesquisar();
			break;
			case 3:
				Listar(b, d);
			break;
			case 4:
				//Deletar();
			break;
			case 5:
				system("cls");
				Quadro(5);
				gotoxy(10,3);
				printf("FECHANDO O PROGRAMA!!\n");
				gotoxy(5,9);
				system("pause");
			break;
			default:
				printf("\nERRO");
		}
	}while(b->opt != 5);
}
int main(){
	Base *b = (Base *) malloc(sizeof(Base));
	b->qtde = 0;
	Dados d;
	system("color 1f");
	TelaInic();	
	Controle(b, &d);
	free(b);
	return 0;
}
