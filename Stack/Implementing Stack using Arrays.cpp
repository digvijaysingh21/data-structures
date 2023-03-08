// Implementing Stack using Arrays.cpp 


#include <iostream>
#include<stack>

using namespace std;
#define MAX 1000

class Stack {
	int top;
public:
	int arr[MAX];

	Stack() {
		top = -1;
	}
	bool push(int x);
	int pop();
	int peek();
	bool isEmpty();
};

bool Stack::push(int x) {
	if (top >= (MAX - 1)) {
		cout << "stack overflow";
		return false;
	}
	else {
		arr[++top] = x;
		return true;
	}
}

int Stack::pop() {
	if (top < 0) {
		cout << "stack underflow";
		return 0;
	}
	else {
		int x = arr[top--];
		return x;
	}
}

int Stack::peek() {
	if (top < 0) {
		cout << "stack is empty";
		return 0;
}
	else {
		int x = arr[top];
		return x;
	}
}

bool Stack::isEmpty() {
	return (top < 0);
}

int main()
{
	class Stack s;
	s.push(5);
	s.push(11);
	s.push(21);

	

	s.pop();
	cout << "top element is " << s.peek() << endl;
	s.pop();
	cout << "top element is " << s.peek() << endl;

	

	if (s.isEmpty()) {
		cout << "Stack is empty";
	}
	else {
		cout << "stack is not empty";
	}

	return 0;

}

