#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

typedef struct Node Node;
typedef Node* List;

List makeList(){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = -99999;
    newNode->next = NULL;

    return newNode;
}

void append(List L , int element){
    while(L->next != NULL){
        L = L->next;
    }

    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = element;
    newNode->next = NULL;

    L->next = newNode;
    return;
}


void printList(List L){
    printf("[");
    while(L->next !=NULL){
        L = L->next;
        printf("%d " , L->data);
    }
    printf("]\n");
}

void removeElement(List L , int element){
    while(L->next!=NULL){
        Node* previousNode = L;
        Node* currentNode = L->next;


        if(currentNode->data == element){
            previousNode->next = currentNode->next;
            free(currentNode);
            printf("Element has been removed\n");
            return;
        }
    L = L->next;
    }

    printf("Element not found\n");
    return;
}


Node* reverse(List L){
    Node* previousNode = NULL;
    Node* nextNode = NULL;
    L = L->next;

    while(L != NULL){
        nextNode = L->next;
        L->next = previousNode;
        previousNode = L;
        L = nextNode;
    }

    Node* head = (Node*)malloc(sizeof(Node));
    head->data = -99999;
    head->next = previousNode;

    return head;
}

int length(List L){
    int count = 0;
    while(L->next!=NULL){
        count++;
        L = L->next;
    }
    return count;
}

int access(List L , int ix){
    if(ix>=length(L) || ix<0){
        printf("IndexOutOfRange Exception");
        return -55555;
    }

    int count = 0;
    while(count<=ix){
        L = L->next;
        count++;
    }
    return L->data;
}

