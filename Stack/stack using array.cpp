// stack using arr2.cpp :
//


#include <iostream>
#include<stack>

using namespace std;

#define MAX 1000

class Stack {
public:
	int arr[MAX];
	int top;

	Stack() {
		top = -1;
	}

	//push
	void push(int x) {
		top++;
		arr[top] = x;
	}

	//pop
	int pop() {
		if (top == -1)
			return -1;
		return arr[top--];
	}

	//peek
	int peek() {
		if (top >= 0)
			return arr[top];
		else {
			cout << "stack is empty" << endl;
			return -1;
		}
	}
	bool isempty() {
		if (top == -1)
			return true;
		else {
			return false;
		}
	}
};

int main()
{
	Stack st;
	st.push(5);
	st.push(11);
	st.push(21);
	st.push(51);
	cout << st.peek() << endl;
	st.pop();
	cout << st.peek() << endl;
	if (st.isempty()) {
		cout << "stack is empty" << endl;
	}
	else {
		cout << "stack is not empty" << endl;
	}

}