#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TREE_HT 100

// Um nó da árvore de Huffman
struct MinHeapNode {
 
    // Caractere da fonte
    char data;
 
    // Frequência do caractere
    unsigned freq;
 
    // Esquerda e direita filhos
    struct MinHeapNode *left, *right;
};
 
// MinHeap: estrutura de dados para armazenar a árvore de Huffman
struct MinHeap {
 
    // Tamanho atual do Min Heap
    unsigned size;
 
    // Capacidade máxima do Min Heap
    unsigned capacity;
 
    // Ponteiro para o array de nós
    struct MinHeapNode** array;
};
 
// Criação de um nó da árvore de Huffman
struct MinHeapNode* newNode(char data, unsigned freq)
{
    struct MinHeapNode* temp
        = (struct MinHeapNode*)malloc
(sizeof(struct MinHeapNode));
 
    temp->left = temp->right = NULL;
    temp->data = data;
    temp->freq = freq;
 
    return temp;
}
 
// Criação de Min Heap
struct MinHeap* createMinHeap(unsigned capacity)
 
{
 
    struct MinHeap* minHeap
        = (struct MinHeap*)malloc(sizeof(struct MinHeap));
 
    // Atribuição de capacidade máxima e inicialização do tamanho atual
    minHeap->capacity = capacity;
    minHeap->size = 0;
 
    // Alocação de memória para o array de nós
    minHeap->array
        = (struct MinHeapNode**)malloc(minHeap->
capacity * sizeof(struct MinHeapNode*));
    return minHeap;
}
 
// Função para trocar dois nós da árvore de Huffman
void swapMinHeapNode(struct MinHeapNode** a,
                     struct MinHeapNode** b)
 
{
 
    struct MinHeapNode* t = *a;
    *a = *b;
    *b = t;
}
 
// Função para minheapify
void minHeapify(struct MinHeap* minHeap, int idx)
 
{
 
    int smallest = idx;
    int left = 2 * idx + 1;
    int right = 2 * idx + 2;
 
    if (left < minHeap->size && minHeap->array[left]->
freq < minHeap->array[smallest]->freq)
        smallest = left;
 
    if (right < minHeap->size && minHeap->array[right]->
freq


// Verifica se o tamanho atual do Min Heap é 1
int isSizeOne(struct MinHeap* minHeap)
{
    return (minHeap->size == 1);
}
 
// Função para extrair o menor nó da árvore de Huffman
struct MinHeapNode* extractMin(struct MinHeap* minHeap)
 
{
 
    struct MinHeapNode* temp = minHeap->array[0];
    minHeap->array[0]
        = minHeap->array[minHeap->size - 1];
 
    --minHeap->size;
    minHeapify(minHeap, 0);
 
    return temp;
}
 
// Insere um nó na árvore de Huffman
void insertMinHeap(struct MinHeap* minHeap,
                   struct MinHeapNode* minHeapNode)
 
{
 
    ++minHeap->size;
    int i = minHeap->size - 1;
 
    while (i && minHeapNode->freq < minHeap->array[(i - 1) / 2]->freq) {
 
        minHeap->array[i] = minHeap->array[(i - 1) / 2];
        i = (i - 1) / 2;
    }
 
    minHeap->array[i] = minHeapNode;
}
 
// Constroi o Min Heap
void buildMinHeap(struct MinHeap* minHeap)
 
{
 
    int n = minHeap->size - 1;
    int i;
 
    for (i = (n - 1) / 2; i >= 0; --i)
        minHeapify(minHeap, i);
}
 
// Função auxiliar para criar a árvore de Huffman
void printArr(int arr[], int n)
{
    int i;
    for (i = 0; i < n; ++i)
        printf("%d", arr[i]);
 
    printf("\n");
}
 
// Função auxiliar para criar a árvore de Huffman
int isLeaf(struct MinHeapNode* root)
 
{
 
    return !(root->left) && !(root->right);
}
 
// Criação da árvore de Huffman
struct MinHeapNode* buildHuffmanTree(char data[], int freq[], int size)
 
{
    struct MinHeapNode *left, *right, *top;
 
    // Criação de um Min Heap com capacidade igual ao tamanho
    struct MinHeap* minHeap = createMinHeap(size);
 
    for (int i = 0; i < size; ++i)
        minHeap->array[i] = newNode(data[i], freq[i]);
 
    minHeap->size = size;
    buildMinHeap(minHeap);
 
