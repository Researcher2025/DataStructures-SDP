#include<iostream>
using namespace std;

class Stack {
    int top = -1;
    int arr[10]; 
    
public:
    void push(int val);
    int pop();
    bool isempty();
    bool isfull();
    int middle();
    void input();
    void display();
};

bool Stack::isempty() {
    return top == -1;
}

bool Stack::isfull() {
    return top == 9; 
}

void Stack::push(int val) {
    if (!isfull()) {
        arr[++top] = val; 
    } else {
        cout << "Stack is full!\n";
    }
}

int Stack::pop() {
    if (!isempty()) {
        return arr[top--]; 
    } else {
        cout << "Stack is empty!\n";
        return -1; 
    }
}

int Stack::middle() {
    if (!isempty()) {
        int middleIndex = top / 2;
        return arr[middleIndex];   
    } else {
        cout << "Stack is empty, no middle element.\n";
        return -1;
    }
}

void Stack::input() {
    int val;
    cout << "Enter up to 10 values: \n";
    while (!isfull()) {
        cin >> val;
        if (val == -1) break; 
        push(val);
    }
}

void Stack::display() {
    if (isempty()) {
        cout << "Stack is empty.\n";
        return;
    }
    cout << "Stack elements: ";
    for (int i = 0; i <= top; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    Stack st;
    st.input(); 
    st.display(); 
    int mid = st.middle();
    if (mid != -1) {
        cout << "Middle element: " << mid << endl;
    }
    
    return 0;
}
