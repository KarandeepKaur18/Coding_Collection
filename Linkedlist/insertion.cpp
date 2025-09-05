// CASE 1 : IF Linked list is empty .

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

    void push_front(int val){
        Node* newnode = new Node(val);
        if(head == NULL){
            head = tail = newnode;
            return;
        }else{
            newnode->next = head;
            head = newnode;
        }
    }

    void insert(int val, int pos){
        if(pos < 0){
            cout << "Invalid position";
            return;
        }

        if(pos == 0){
            push_front(val);
            return;
        }

        Node* temp = head;
        for(int i = 0; i<pos-1;i++){
            if(temp == NULL){
                cout<<"Invalid pos";
                return;
            }
            temp = temp->next;
        }

        Node* newnode = new Node(val);
        newnode->next = temp->next;
        temp->next = newnode;
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

    l1.insert(3,2);
    l1.printLL();
}



