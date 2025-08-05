// #include <iostream>
// using namsepace std;

// struct Node{
//     int data;
//     Node* next;
// };

// int main(){
    
//     // Created two nodes 
//     Node* head = new Node();
//     head->data = 45;
//     head->next = NULL;

//     Node* second = new Node();
//     second->data = 56;
//     second->next = NULL;
    
//     // lets connect two nodes ;
//     head->next = second;

//     // while loop for checking ;
//     // always start from head in linked list in loop

//     Node* temp = head;
//     // temp structure will be same to head {copy}

//     while (temp->next!=NULL){
//         cout << temp->data<<" ";
//         temp = temp->next;
//     }

//     cout << "NULL" << endl;
// }


#include <iostream>
using namespace std;

class Node{
    public;
    int data ;
    Node* next;

    Node(int value){
        this->data = value;
        this->next = NULL;
    }
};

class LinkedList{
    private;
    LinkedList(){
        head = NULL;
    }

    void InsertAtLast(int value){
        Node* newNode = new Node(value);
        if(head == NULL){
            head = newNode;
            return;
        }

        Node *temp = head;

        while(temp-> next!= NULL){
            temp = temp->NEXT;
        }

        temp->next = newnode;
    }

    void insertAtBeginning(int value){
         Node* newNode = new Node(value);
         newNode->next = head;
         head = newNode;
    }

    void display(){
        
    }

}

int main(){
    Node* head = new Node(45)
    Node* second = new Node(50);

    head->next = second;
    second->next = NULL;



    Node* temp = head;
    
    while(temp->next != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "NULL" <<endl;
}