#include <iostream>
using namespace std;

// jo bhi naea element add krege vo linkedlist ka head bnjega.

class Node{
    public: 
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class MyStack{
    private:
    Node* top;
    int size;

    public:
    MyStack() {
        top = NULL;
        size = 0;
    }

    void push(int value){
        Node* newnode = new Node(value);
        newnode->next = top;
        top = newnode;
        cout << "value";
        size++;
    }

    int pop(){
        if(top == NULL){
            cout << "Stack is empty";
            return -1;
        }

        int popedValue = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        size--;
        cout << poppedValue << "Popped from the stack" << endl;
    }

    int peek(){
        if(top == NULL){
            cout << "Stack is empty";
            return -1;
        }
        return top->data;
    }

    bool isEmpty(){
        return top == NULL;
    }

    int getSize(){
        return size;
    }

     void display() {
        if (items.empty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements (top to bottom): ";
        for (int i = items.size() - 1; i >= 0; i--) {
            cout << items[i] << " ";
        }
        cout << endl;
    }
}


int main(){
    
    
    MyStack st;

    st.push(10);
    st.push(20);
    st.push(30);

    st.display();

    cout << "Top element is: " << st.peek() << endl;

    cout << "Popped element: " << st.pop() << endl;

    st.display();

    return 0;
    
}