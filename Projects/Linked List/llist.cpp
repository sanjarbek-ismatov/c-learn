#include<iostream>
using namespace std;
class Node{
public:
    int value;
    Node* next;
    Node* prev;
    Node(int value){
        this -> value = value;
        this -> next = nullptr; 
    };
};

class LinkedList{
public:
    Node* head;
    Node* tail;
public:
    int size;
    LinkedList(){
        this -> head = nullptr;
        this -> tail = nullptr;
        this -> size = 0;
    }
    bool isEmpty(){
        return this -> size == 0;
    }
    void prepend(int value){
        Node* node = new Node(value);
        if(this -> isEmpty()){
            this -> head = node;
            this -> tail = node;
        } else{
            this->head ->prev = node;
            node -> next = this -> head;
            this -> head = node;
        }
        this -> size++;
    }
    void append(int value){
        if(this->isEmpty()){

        }
    }
};

int main(){
    LinkedList llist = LinkedList();
    llist.prepend(10);
    llist.prepend(20);
    cout << llist.tail->value << endl;
    return 0;
}