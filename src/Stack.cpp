#include "Stack.hpp"

// Description
// 	- Default constructor to set the maxSize of the Stack to a default value of 100.
// Preconditions
//  - None.
// Postconditions
// 	- The stack is now empty, and given a maxSize of 100.
Stack::Stack() {
	maxSize = 100;
}

// Description
// 	- Constructor to set the maxSize of the Stack to an integer value.
// Preconditions
//  - inputSize must be a valid integer value.
//  - inputSize cannot be less than 1.
// Postconditions
// 	- maxSize is now set to the inputSize.
Stack::Stack(int x) {
	if (x <= 0)
		throw x; // May need to check this.
	maxSize = x;
}

// Description
// 	- Function to add a new Customer to the top of the stack.
// Preconditions
//  - Stack must exist.
//  - Stack must not be full.
// Postconditions
// 	- The stack is changed and newCustomer is added to the top of the stack.
//  - Throws an exception if the stack is full.
void Stack::push(Customer* newCustomer) {
	if (size() > maxSize) {
		throw "Push Error, Stack Full.\n";
	}
	push_front(newCustomer);
}

// Description
// 	- Function to remove the top element of the stack.
// Preconditions
//  - Stack must exist.
//  - Stack must not be full.
// Postconditions
// 	- The stack is changed and the top element is removed from the stack.
//  - Throws an exception if the stack is empty.
void Stack::pop() {
	if (head == nullptr)
		throw "The stack is now empty, cannot pop anymore.\n";
	else {
		node* temp;
		temp = head;
		head = head->next;
		delete temp;
	}
}

// Description
// 	- Function to return the top Customer of the stack
// Preconditions
//  - Stack must exist.
//  - Stack must not be empty.
// Postconditions
// 	- Returns the top Customer of the stack.
//  - Throws an exception if the stack is empty.
Customer* Stack::top() {
	node* current = head;
	if (head == nullptr) {
		throw "Stack is empty.";
	}
	else {
		return current->data;
	}
}

// Description
// 	- Function to determine whether the stack is empty.  Returns a boolean value.
// Preconditions
//  - Stack must exist.
//  - Stack must not be full.
// Postconditions
// 	- Returns true if the stack is empty.
//  - Returns false if the stack is not empty.
bool Stack::isEmpty() {
	if (head == nullptr)
		return true;
	else
		return false;
}

// Description
// 	- Function to determine whether the stack is full.  Returns a boolean value.
// Preconditions
//  - Stack must exist.
// Postconditions
// 	- Returns true if the stack is full.
//  - Returns false if the stack is not full.
bool Stack::isFull() {
	if (size() >= maxSize)
		return true;
	else
		return false;
}

Stack::~Stack() {

}
