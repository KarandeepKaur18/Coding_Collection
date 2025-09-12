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

    void delete_at_head(){
        if(head == NULL){
            cout << "No node available to delete";
            return;
        }

        if(head == tail){
            delete head;
            head = tail = NULL;
        }else{
            Node*temp = head;
            head = head->next;
            tail->next = head;

            temp->next = NULL;
            delete temp;
        }

    }

    void delete_at_tail(){
        if(head = NULL) return;
        else if(head = tail){
            delete tail;
        }else{
            Node* temp = tail;
            Node* prev = head;
            while(prev != tail){
                prev = prev->next;
            }

            tail = prev;
            tail->next = head;
            temp->next = NULL;
            delete temp;
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

    cll.delete_at_head();
    cll.delete_at_tail();

    cll.print();

}
