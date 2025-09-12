#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = prev = NULL;
    }
};

class DoublyList{
    Node* head;
    Node* tail;

    public:
    DoublyList(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newnode = new Node(val);
        if(head == NULL){
            head = tail = newnode;
        }else{
            // Node* temp = head;
            // head = newnode;
            // newnode->next = temp;
            // newnode->prev = NULL;
            // temp->prev = newnode;

            // **Optimized approach **
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
    }


    void print(){
        Node* temp = head;
        while(temp!= NULL){
            cout << temp->data << "<=>";
            temp = temp->next;
        }
        cout << "NULL";
    }

};

int main(){
    DoublyList dll;
    dll.push_front(3);
    dll.push_front(2);
    dll.push_front(1);

    dll.print();
}