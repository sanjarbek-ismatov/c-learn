#include<stdio.h>
#include<stdbool.h>
typedef struct {
    int value;
    Node next;
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

bool is_empty(LinkedList* list){
    return list -> size == 0;
}

int main(){
    LinkedList llist = initialise_list();
    printf("%d\n", llist.size);
}