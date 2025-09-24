// Queue is FIRST IN FIRST OUT  data structure in which we add elements from rare end and pop elements from first end . 
// push -> enqueue  pop -> dequeue 
// We need to add from rare end and delete from front end and make the newnode as front 

#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int val){
        data = val;
        next = tail= NULL;
    }
};

class Queue {
    Node* head;
    Node* tail;
    
    
    public:
    Queue(){
        head = tail = NULL;
    }

    void add_rare(int val){
        Node* newnode = new Node(val);
        if(head == NULL){
            head = tail = newnode;
        }else{
            tail>next = newnode;
            tail = newnode;
        }
    }

    void pop_front(){
        if(head== NULL){
            return ;
        }else{
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    int front(){
        if(empty()){
            return ;
        }
        return head->data;
    }
};

int main{
    Queue q;

    q.add_rare(1);
    q.add_rare(2);
    q.add_rare(3);

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl;
    return 0;
}