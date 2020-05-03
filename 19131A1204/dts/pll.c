#include <stdio.h>
#include <stdlib.h>
#include "ll.h"



void main() {
    struct Node* ele2 = (struct Node*) malloc(sizeof(struct Node));
    struct Node* ele1 = (struct Node*) malloc(sizeof(struct Node));
    struct Node* ele0 = (struct Node*) malloc(sizeof(struct Node));
   
    ele2->data = 3;
    ele2->next = NULL;

    ele1->data = 2;
    ele1->next = ele2;

    ele0->data = 1;
    ele0->next = ele1;

    printList(ele0);

    printf("\n");
}