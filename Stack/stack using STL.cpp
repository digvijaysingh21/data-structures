// stack using STL.cpp : 

#include<iostream>
#include<stack>

using namespace std;

int main() {
	stack<int> st;
	st.push(5);
	st.push(11);
	st.push(21);
	st.push(101);

	//pop
	st.pop();
	cout << "top element is " << st.top() << endl;
	if (st.empty()) {
		cout << "stack is empty" << endl;
	}
	else {
		cout << "stack is not empty" << endl;

	}

	cout << "size of stack is " << st.size() << endl;
	return 0;
}