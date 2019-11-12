#ifndef STACK_HPP_
#define STACK_HPP_

#include "LinkedList.hpp"

class Stack: private LinkedList {
private:
	int maxSize;
public:
	Stack();
	Stack(int);
	void push(Customer*);
	void pop();
	Customer* top();
	bool isEmpty();
	bool isFull();
	virtual ~Stack();
};

#endif
