#include <iostream>
#include <vector>
using namespace std;

class MyStack {
private:
    vector<int> items;   // dynamic array using vector

public: 

    void push(int value) {
        items.push_back(value);
        cout << value << " pushed into stack." << endl;
    }

    int pop() {
        if (items.empty()) {
            cout << "Stack Underflow!" << endl;
            return -1;
        }
        int topItem = items.back();
        items.pop_back();
        cout << topItem << " popped from stack." << endl;
        return topItem;
    }

    int peek() {
        if (items.empty()) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return items.back();
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