#include<iostream>
using namespace std;
class Node{
public:
    int value;
    Node* next;
    Node(int value){
        this -> value = value;
        this -> next = nullptr; 
    };
};

class LinkedList{
private:
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
};

int main(){
    LinkedList llist = LinkedList();
    cout << llist.isEmpty() << endl;
    return 0;
}