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

class List{
    Node* head;
    Node* tail;
    
    public:
    List(){
        head = tail = NULL;
    }
    

    void push_back(int val){
        Node* newnode = new Node(val);

        if(head = NULL){
            head = tail = newnode;
            return;
        }else{
            tail->next = newnode;
            tail = newnode;
        }
    }

    void printLL(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout<<endl;
    }
};

int main(){
    List l1;
    l1.push_front(1);
    l1.push_front(2);

    l1.push_back(3);
    l1.push_back(4);
    
    l1.printLL();
}