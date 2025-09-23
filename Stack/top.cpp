#include <iostream>
using namespace std;

#define MAX 10   

class MyStack {
private:
    int items[MAX]; 
    int count;      

public:

    MyStack() {
        count = 0;
    }


    bool isEmpty() {
        return count == 0;
    }


    bool isFull() {
        return count == MAX;
    }


    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push " << value << endl;
            return;
        }
        items[count++] = value;
        cout << value << " pushed to stack." << endl;
    }


    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Cannot pop." << endl;
            return -1;
        }
        return items[--count];
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return items[count - 1];
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements (top to bottom): ";
        for (int i = count - 1; i >= 0; i--) {
            cout << items[i] << " ";
        }
        cout << endl;
    }
};

int main() {
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