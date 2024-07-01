#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
typedef struct Node{
    int value;
    struct Node* next;
    struct Node* prev;
} Node;

typedef struct {
    Node* head;
    Node* tail;
    int size;
} LinkedList;

LinkedList initialise_list(){
    LinkedList list = {
        .head = NULL,
        .tail = NULL,
        .size = 0
    };
    return list;
}

Node* initialise_node(int value){
    Node* node = (Node*)malloc(sizeof(Node));
    if(node == NULL){
        fprintf(stderr, "Memory allocation failed!");
        exit(1);
    }
    node -> value = value;
    node -> next = NULL;
    node -> prev = NULL;
    return node;
}

bool is_empty(LinkedList* list){
    return list -> size == 0;
}


void prepend(LinkedList* this, int value){
    Node* node = initialise_node(value);
    if(is_empty(this)){
        this -> head = node;
        this -> tail = node;
    }else{
        this -> head -> prev = node;
        node -> next = this -> head;
        this -> head = node;
    }
    this -> size++;
}

int main(){
    LinkedList llist = initialise_list();
    prepend(&llist, 10);
    prepend(&llist, 20);
    printf("%d\n", llist.tail->value);
}