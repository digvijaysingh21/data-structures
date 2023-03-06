// stack using array1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stack>
using namespace std;

class Stack {
public:
    int *arr;
    int top;
    int size;

    //constructor
    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    //push 
    void push(int element) {
        if (size - top > 1) {
            top++;
            arr[top] = element;
        }
        else {
            cout << "stack is overflow" << endl;
        }
    }

    //pop
    void pop() {
        if (top >= 0) {
            top--;
        }
        else{
            cout << "stack is underflow" << endl;
        }
    }
    //peek element at top
    int peek() {
        if (top >= 0) {
            return arr[top];
        }
        else {
            cout << "stack is empty" << endl;
            return -1;
        }
    }
    bool isempty() {
        if (top == -1) {
            return true;
        }
        else {
            return false;
        }
    }
};


int main()
{
    Stack st(5);
    st.push(5);
    st.push(11);
    st.push(51);
    st.push(101);
    st.push(501);
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    if (st.isempty()) {
        cout << "STACK IS EMPTY" << endl;
    }
    else {
        cout << "STACJK IS NOT EMPTY" << endl;
    }
}

