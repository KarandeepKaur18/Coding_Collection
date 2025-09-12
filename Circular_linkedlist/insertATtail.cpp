#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class CircularList{
    Node* head;
    Node* tail;

    CircularList(){
        head = tail =NULL;
    }

    void add_front(int val){
        Node* newnode = new Node(val);
        if(head == NULL){
            head = tail = newnode;
            tail->next = head;
            return;
        }

        newnode->next = head;
        head = newnode;
        tail->next = head;

    }

    void add_tail(int val){
        Node* newnode = new Node(val);
        if(head == NULL){
            head = tail = newnode;
            tail->next = newnode ;
            return;
        }else{
            tail->next = newnode;
            tail = newnode;
            tail->next = head;
        }
    }

    void print(){
        if(head == NULL){
            return;
        }

        cout << head->data << "->";
        Node* temp = head->next;

        while(temp != head){
            cout << temp->data << "->";
            temp = temp->next;
        }

        cout << temp->data <<endl;
        // to show that it is circular ll
    }
};


int main(){
    CircularList cll;
    
    cll.add_front(1);
    cll.add_front(2);
    cll.add_front(3);

    cll.add_tail(4);
    cll.add_tail(5);

    cll.print();


}
