#include <stdlib.h>
#include <stdio.h>

struct Node { 
    int data; 
    struct Node *next;
};

struct LinkedList {
    struct Node *head;
    struct Node *tail;
    int length = 0;
};

void printList(struct Node *node) {
    while(node != NULL) {
        printf(" %d ", node->data);
        node = node->next;
    }
}

struct Node* getItemLinkedList(struct LinkedList* list, int index) {
    if(index < list->length) {
        int pos = 0;
        struct Node *item = list->head;
        while (pos != index)
        {
            item = item->next;
            pos++;
        }
        return item;
    }
    else
        return NULL;
}

void prependToLinkedList(struct LinkedList *list, int val) {
    struct Node *newHead = (struct Node*) malloc(sizeof(Node));
    struct Node *head = list->head;
    newHead->data = val;
    newHead->next = head;
    list->head = newHead;
    list->length++;
}

void appendToLinkedList(struct LinkedList *list, int val) {
    struct Node *newTail = (struct Node*) malloc(sizeof(Node));
    struct Node *tail = list->tail;
    newTail->data = val;
    newTail->next = NULL;
    tail->next = newTail;
    list->tail = newTail;
    list->length++;
}

void deleteInLinkedList(struct LinkedList *list, int index) {
    int pos = 0;
    struct Node* item = NULL;
    struct Node* delItem =NULL;
    struct Node* nextItem = NULL;
    item = getItemLinkedList(list, index-1);
    delItem = item->next;
    nextItem = delItem->next;
    item->next = nextItem;
    free(delItem);
    list->length--;
}
