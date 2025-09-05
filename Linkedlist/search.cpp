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

    void Search(int key){
        if(head == NULL){
            cout << "No such key Found";
            return;
        }

        Node* temp = head;
        int count = 0;
        while(temp != NULL){
            if(temp->data == key){
                cout <<  count ;
                return;
            }else{
                temp = temp->next;
                count+=1;
            }
        }

        cout << "No Such key is Found !";
        
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
    l1.printLL();

    l1.Search(1);
    cout << endl;
}
