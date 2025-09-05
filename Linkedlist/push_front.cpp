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
}



// SUMMARY OF THE CODE : 
// ✅ 1. Basic Understanding: What is a Node*?

// In C++, when you write:

// Node* head;


// You are declaring a pointer to a Node object — not an object itself. This pointer can point to:

// A Node object in memory

// NULL (meaning it doesn't point anywhere yet)

// So, Node* is a pointer to a Node.

// ✅ 2. What Happens in the List Class?

// Here's a simplified explanation of what the class is doing.

// Class members:
// class List {
//     Node* head;  // pointer to the first node in the list
//     Node* tail;  // pointer to the last node in the list


// So inside the List, we have two pointers:

// head points to the first node

// tail points to the last node

// Initially, both are NULL — i.e., the list is empty.

// ✅ 3. What Happens in push_front()?

// Let's walk through this function:

// void push_front(int val){
//     Node* newnode = new Node(val);  // create a new node with value = val

//     if(head == NULL){
//         head = tail = newnode;      // list was empty, now head and tail both point to this node
//         return;
//     } else {
//         newnode->next = head;       // point new node to the old head
//         head = newnode;             // update head to be this new node
//     }
// }

// Important part:
// Node* newnode = new Node(val);


// Here, new Node(val) creates a Node object on the heap and returns its address, which is stored in the pointer newnode.

// So now:

// newnode is a pointer to that newly created node

// When we do head = newnode, we're saying "make the head pointer point to this node"

// ✅ 4. What is head = NULL or head = newnode?

// This is a key confusion you asked about. Let's clear it up:

// Code	Meaning
// Node* head = NULL;	Head is a pointer that currently doesn’t point to any node
// head = newnode;	Head is now pointing to the same node as newnode

// So:

// head is not the node itself. It is a pointer to a node

// When you assign head = newnode, you are copying the address (i.e., the pointer value)

// ✅ 5. Is head a pointer or value?

// head is a pointer. So:

// If you write head = NULL, you're saying: “head points to nothing”.

// If you write head = newnode, you're saying: “head now points to this node”.

// You can imagine this as:

// [head] ---> [Node1] ---> [Node2] ---> NULL

// 🔴 Fix in Your Code

// There's a small bug in your code:

// head = tail = newNode;  // This should be 'newnode', not 'newNode'


// C++ is case-sensitive. So it should be:

// head = tail = newnode;

// ✅ Summary
// Concept	Meaning
// Node* ptr;	Declares a pointer to a node
// ptr = new Node(5);	Allocates memory and points ptr to it
// head = ptr;	Now head points to the same node
// head = NULL;	Now head doesn’t point to any node
// ptr->data	Accesses the data field in the node being pointed to
// ptr->next	Accesses the pointer to the next node