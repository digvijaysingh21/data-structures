// stack using linked list.cpp 
//

#include<iostream>
#include<stack>
using namespace std;

class Node {
public:
	int data;
	Node* next;

	//constructor
	Node(int n) {
		this->data = n;
		this->next = NULL;
	}
};

class Stack {
	Node* top;
public:
	Stack() {
		top = NULL;
	}

	//push

	void push(int data) {
		Node* temp = new Node(data);
		
		//check if stack is full
		if (!temp) {
			cout << "overflow";
			exit(1);
		}
		//initialize data into temp data
		temp->data = data;

		//put top pointer reference into temp next
		temp->next = top;

		//make temp as top of stack
		top = temp;
	}

	//function to check if stack is empty or not

	bool isEmpty() {
		//if top is null means no elemnt in stack
		return top == NULL;
	}

	//function to return top element in stack

	int peek() {
		//if stack is not empty return top element
		if (!isEmpty())
			return top->data;
		else
			exit(1);
	}

	//function to remove
	void pop() {
		Node* temp;
		//check underflow condition
		if (top == NULL) {
			cout << "underflow" << endl;
			exit(1);
		}
		else {
			//assign top to temp
			temp = top;
			//assign second node to top
			top = top->next;

			//release memeory of deleted node
			free(temp);
		}
	}

	//function to print all elemnts of stack
	void display() {
		Node* temp;

		//check for underflow
		if (top == NULL) {
			cout << "stack is underflow";
			exit(1);
		}
		else {
			temp = top;
			while (temp != NULL) {
				//print node
				cout << temp->data;

				//assign temp next to temp
				temp = temp->next;
				if (temp != NULL)
					cout << "->";

			}
		}
	}
};
int main() {
	//creating stack
	Stack s;

	//push element in stack
	s.push(5);
    s.push(11);
	s.push(21);
	s.push(51);

	//display stack element
	s.display();

	//print top element of stack
	cout << "\ntop element of stack " << s.peek() << endl;

	//delete top element
	s.pop();
	s.pop();

	//dispaly stack element
	s.display();

	//print top element
	cout << "\ntop element of stack " << s.peek() << endl;

	return 0;
}
