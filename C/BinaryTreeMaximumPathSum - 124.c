#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int numero;
    struct node *direito;
    struct node *esquerdo;
}node;

struct node *insert(struct node *node, int key) {
  
  if (node == NULL) 
  return newNode(key);

  
  if (key < node->numero)
    node->esquerdo = insert(node->esquerdo, key);
  else
    node->direito = insert(node->direito, key);

  return node;
}

int soma(node *root){
    if (root == NULL)
    {
        return 0;
    }
    return root->numero + soma(root->direito) + soma(root -> esquerdo);
}

struct node *insert(struct node *node, int key) {
    if (node == NULL)
        return newNode(key);

    if (key < node->numero)
        node->esquerdo = insert(node->esquerdo, key);
    else
        node->direito = insert(node->direito, key);

    return node;
}


int main(){


}