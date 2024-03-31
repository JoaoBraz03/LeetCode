#include <stdio.h>
#include <malloc.h>

typedef struct node{
    int valor;
    struct node *proximo;
}
node;

int main (){
    node *head = (struct node*)malloc(sizeof(struct node));



    return 0;
}

void insertionAtEnd(struct node** head, int new_data) {

  struct node* new = (struct node*)malloc(sizeof(struct node));
  struct node* lastnode = *head; 

  new->valor = new_data;

  new->proximo = NULL;

  if (*head == NULL) {
    *head = new;
    return;
  }

  while (lastnode->proximo != NULL) lastnode = lastnode->proximo;

    lastnode->proximo = new;

    return;

}

void Girar(struct node **head, int vezes) {
    if (*head == NULL || vezes == 0) {
        return;
    }

    struct node *current = *head;
    int count = 1; // Count the number of nodes in the list

    // Traverse to the end of the list to count nodes
    while (current->proximo != NULL) {
        current = current->proximo;
        count++;
    }

    // Adjust 'vezes' to prevent unnecessary rotations
    vezes = vezes % count;

    if (vezes == 0) {
        return;
    }

    struct node *tail = *head;
    struct node *new_tail = *head;

    // Move 'tail' to the (count - vezes)th node
    for (int i = 0; i < count - vezes - 1; i++) {
        tail = tail->proximo;
    }

    // Move 'new_tail' to the last node
    while (new_tail->proximo != NULL) {
        new_tail = new_tail->proximo;
    }

    // Make the last node point to the original head to form a loop
    new_tail->proximo = *head;

    // Update the head to the node next to 'tail' and break the loop
    *head = tail->proximo;
    tail->proximo = NULL;
}