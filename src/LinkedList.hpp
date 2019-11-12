#ifndef LINKEDLIST_HPP_
#define LINKEDLIST_HPP_
#include "Customer.hpp"

struct node {
	Customer *data;
	node *next;
};

class LinkedList {
protected:
	node *head;
private:

	void push_back(node*, node*);
	int size(node*);
	void print_list(node*);
	Customer* pop_back(node*, Customer*);

public:
	LinkedList();
	void push_back(Customer*);
	void push_front(Customer*);
	int size();
	void delete_list();
	void print_list();
	Customer* pop_front();
	Customer* pop_back();
	Customer* find(int);
	bool exists(int);
	bool deleteIt(int);
	~LinkedList();

};

#endif
