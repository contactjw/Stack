#include "LinkedList.hpp"

// Description
// 	- Constructor to initialize the list to an empty state.
// Preconditions
//	- head = nullptr.
// Postconditions
//	- head will be set to nullptr, signifying an empty list.
LinkedList::LinkedList() {
	head = nullptr;
}

// Description
// 	- Function to add a new node to the end of the list.
// Preconditions
//	- The list must exist.
//  - If it isn't the end of the list, traverse the list.
//  - Must accept a valid Customer pointer variable as an argument.
// Postconditions
// 	- If the list exists, it will set the last element to the newNode.
void LinkedList::push_back(Customer* info) {
	node *newNode = new node;
	newNode->data = info;
	newNode->next = nullptr;
	node *current = nullptr;

	if (head == nullptr) {
		head = newNode;
	} else {
		current = head;
		push_back(newNode, current);
	}
}

// Description
// 	- Recursive function to add a new node to the end of the list.
// Preconditions
//	- The list must exist.
//  - If it isn't the end of the list, traverse the list.
//  - Must accept a valid Customer pointer variable as an argument.
// Postconditions
// 	- If the list exists, it will set the last element to the newNode.
void LinkedList::push_back(node *newNode, node *current) {
	if (current->next == nullptr)
		current->next = newNode;
	else
		push_back(newNode, current->next);
}

// Description
// 	- Function to add a new node to the front of the list.
// Preconditions
//	- The list must exist.
//  - Set head = newNode.
//  - Must accept a valid Customer pointer variable as an argument.
// Postconditions
// 	- If the list exists, it will set the head to the newNode.
void LinkedList::push_front(Customer* info) {
	node *newNode = new node;
	newNode->data = info;
	newNode->next = head;
	head = newNode;
}

// Description
// 	- Function to return the number of nodes in the list.
// Preconditions
//	- The list must exist.
//  - The list must not be empty.
// Postconditions
// 	- If the list exists, it will return an integer number of elements in the list.
//  - If the list is empty, it will return 0.
int LinkedList::size() {
	if (head == nullptr)
		return 0;
	else {
		return 1 + size(head->next);
	}
}

// Description
// 	- Recursive function to return the number of nodes in the list.
// Preconditions
//	- The list must exist.
//  - The list must not be empty.
// Postconditions
// 	- If the list exists, it will return an integer number of elements in the list.
//  - If the nextNode is not nullptr, it will call itself with nextNode->next.
//  - If the list is empty, it will return 0.
int LinkedList::size(node* nextNode) {
	if (nextNode == nullptr) {
		return 0;
	}
	return 1 + size(nextNode->next);
}

// Description
// 	- Function to delete all the nodes from the list.
// Preconditions
//	- The list must exist.
//  - The list must not be empty.
// Postconditions
// 	- If the list exists, it will delete the nodes until head = nullptr.
void LinkedList::delete_list() {
	node *temp;
	while (head != nullptr) {
		temp = head;
		head = head->next;
		delete temp->data;
		delete temp->next;
		delete temp;
		temp = nullptr;
	}
}

// Description
// 	- Function to print the contents of the current list.
// Preconditions
//	- The list must exist.
//  - The list must not be empty.
// Postconditions
// 	- If the list exists, it will print the contents of the list until the end of list.
//  - If the list is empty, it will print "Empty Linked List"
void LinkedList::print_list() {
	node *current = head;
	if (head == nullptr)
		cout << "Empty Linked List";
	else {
		cout << current->data->getID() << endl;
		print_list(current->next);
	}
}

// Description
// 	- Recursive function to print the contents of the current list.
// Preconditions
//	- The list must exist.
//  - The list must not be empty.
// Postconditions
// 	- If the list exists, it will print the contents of the list until the end of list.
//  - If the list is empty, it will return from the function, displaying nothing.
void LinkedList::print_list(node *current) {
	if (current == nullptr)
		return;
	else {
		cout << current->data->getID() << endl;
		print_list(current->next);
	}
}

// Description
// 	- Function to remove the first element of the array and return it in the function call.
// Preconditions
//	- The list must exist.
//  - The list must not be empty.
// Postconditions
// 	- If the list exists, it will delete the first element of the list
//    and return it in the function call.
Customer* LinkedList::pop_front() {
	Customer *poppedInfo = head->data;
	node *temp = head;
	head = head->next;

	delete temp;

	return poppedInfo;
}

// Description
// 	- Function to remove the last element of the array and return it in the function call.
// Preconditions
//	- The list must exist.
//  - The list must not be empty.
// Postconditions
// 	- If the list exists, it will delete the last element of the list
//    and return it in the function call.
Customer* LinkedList::pop_back() {
	Customer *poppedInfo = nullptr;

	node *current = nullptr;

	if (head->next == nullptr) {
		poppedInfo = head->data;
		delete head;
		head = nullptr;
		return poppedInfo;
	} else {
		current = head;
		poppedInfo = pop_back(current, poppedInfo);
		return poppedInfo;
	}
}

// Description
// 	- Recursive function to pop_back, which increments the current variable until end of list
// Preconditions
//	- The list must exist.
//  - The list must not be empty.
// Postconditions
// 	- If the current nodes next next value is not nullptr, it will increment until
//    the end of the list.
//  - Returns the last element to pop_back().
Customer* LinkedList::pop_back(node *current, Customer *poppedInfo) {
	if (current->next->next != nullptr) {
		poppedInfo = pop_back(current->next, poppedInfo);
		return poppedInfo;
	} else {
		poppedInfo = current->next->data;
		delete current->next;
		current->next = nullptr;
		return poppedInfo;
	}
}

// Description
// 	- Function to determine whether the Customer ID is in the current list.
// Preconditions
// 	- ID must be a valid integer value.
//	- The list must exist.
//  - The list must not be empty.
// Postconditions
// 	- Returns the customer pointer if the ID was found in the list.
//  - Returns nullptr if the array is empty.
Customer* LinkedList::find(int ID) {
	node *current = nullptr;
	current = head;

	while (current != NULL) {
		if (current->data->getID() == ID) {
			Customer* foundCust = current->data;
			return foundCust;
		}
		current = current->next;
	}
	return nullptr;
}

// Description
// 	- Function to determine whether the Customer ID exists in the list.
// Preconditions
// 	- ID must be a valid integer value.
//	- The list must exist.
//  - The list must not be empty.
// Postconditions
// 	- Returns true if the ID was found in the list.
//  - Returns false if the array is empty or if the ID does not exist.
bool LinkedList::exists(int ID) {
	node *current = nullptr;
	current = head;

	while (current != NULL) {
		if (current->data->getID() == ID)
			return true;
		current = current->next;
	}
	return false;
}

// Description
// 	- Function to delete an item from the list.
// Preconditions
// 	- ID must be a valid integer value.
//	- The list must exist.
//  - The list must not be empty.
// Postconditions
// 	- Returns true if the ID was found in the list, and deletes it.
//  - Returns false if the ID is not in the list, or if the list is empty.
bool LinkedList::deleteIt(int ID) {
	node *current = head;
	node *prev = head;
	bool found = false;

	if (head == nullptr) {
		return false;
	} else {
		while (current->data->getID() != ID) {
			prev = current;
			current = current->next;
			if (current->data->getID() == ID)
				found = true;
			if (current->next == nullptr)
				return false;
		}
		if (found == true) {
			delete current;
			current = nullptr;
			prev->next = prev->next->next;
			return true;
		}
		return false;
	}
}

// Description
// 	- Destructor to delete the linked list.
// Preconditions
// 	- The list must go out of scope.
//  - The destructor will call delete_list().
// Postconditions
// 	- The list will be deleted.
LinkedList::~LinkedList() {
	delete_list();
}

