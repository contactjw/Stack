#include <iostream>
#include "Customer.hpp"
#include "LinkedList.hpp"
#include "Stack.hpp"
using namespace std;

int main() {
	Stack *myStack = new Stack(5);
	Customer *newCust = nullptr;

	if (myStack->isEmpty())
		cout << "The stack is confirmed to be empty." << endl;

	try {
		myStack->pop();
	} catch (const char *errorMess) {
		cout << errorMess << endl;
	}

	for (int i = 1; i < 6; i++) {
		newCust = new Customer();
		newCust->setID(i);
		try {
			myStack->push(newCust);
		} catch (const char *errorMess) {
			cout << errorMess << endl;
		}
	}

	if (myStack->isFull()) {
		cout << "Stack is confirmed to be full." << endl;
	}

	for (int i = 1; i < 5; i++) {
		try {
			cout << myStack->top()->getID();
			myStack->pop();
			cout << endl;
		} catch (const char *error) {
			cout << error << endl;
		}
	}

	cout << myStack->top()->getID();
	myStack->pop();

	cout << endl;

	try {
		myStack->pop();
	} catch (const char *errorMess) {
		cout << errorMess << endl;
	}

	return 0;
}
