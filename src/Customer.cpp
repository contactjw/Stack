#include "Customer.hpp"

// Description
// 	- Constructor to create an empty Customer.
// Preconditions
//  - None.
// Postconditions
// 	- Must set the Customer's variables through setters.
Customer::Customer() {

}

// Description
// 	- Function to set Customer ID to an integer value argument.
// Preconditions
//  - Argument must be a valid integer greater than 0.
// Postconditions
// 	- Returns true if the ID is greater than 0.
//  - Returns false if the ID is less than 1.
//  - set ID = to the argument idNum.
bool Customer::setID(int idNum) {
	if (idNum <= 0)
		return false;
	ID = idNum;
	return true;
}

// Description
// 	- Function to return the integer value of Customer's ID.
// Preconditions
//  - Customer must be created in memory.
//  - Customer must have a valid ID set to an integer greater than 0.
// Postconditions
// 	- Returns the integer value of the ID variable.
int Customer::getID() {
	return ID;
}

// Description
// 	- Function to set Customer name to a string value argument.
// Preconditions
//  - Argument must be a valid string, cannot be empty string.
// Postconditions
// 	- Returns true if the name is a valid string, and not empty.
//  - Returns false if the name is an empty string value.
//  - set name = to the argument newName.
bool Customer::setName(string newName) {
	if (newName == "")
		return false;
	name = newName;
	return true;
}

// Description
// 	- Function to return the string value of the Customer's name.
// Preconditions
//  - Customer must be created in memory.
//  - Customer must have a valid name set to a non-empty string.
// Postconditions
// 	- Returns the string value of the name variable.
string Customer::getName() {
	return name;
}

// Description
// 	- Function to set Customer address to a string value argument.
// Preconditions
//  - Argument must be a valid string, cannot be empty string.
// Postconditions
// 	- Returns true if the address is a valid string, and not empty.
//  - Returns false if the address is an empty string value.
//  - set address = to the argument newAddress.
bool Customer::setAddress(string newAddress) {
	if (newAddress == "")
		return false;
	address = newAddress;
	return true;
}

// Description
// 	- Function to return the string value of the Customer's address.
// Preconditions
//  - Customer must be created in memory.
//  - Customer must have a valid address set to a non-empty string.
// Postconditions
// 	- Returns the string value of the address variable.
string Customer::getAddress() {
	return address;
}

// Description
// 	- Function to set Customer city to a string value argument.
// Preconditions
//  - Argument must be a valid string, cannot be empty string.
// Postconditions
// 	- Returns true if the city is a valid string, and not empty.
//  - Returns false if the city is an empty string value.
//  - set city = to the argument newCity.
bool Customer::setCity(string newCity) {
	if (newCity == "")
		return false;
	city = newCity;
	return true;
}

// Description
// 	- Function to return the string value of the Customer's city.
// Preconditions
//  - Customer must be created in memory.
//  - Customer must have a valid city set to a non-empty string.
// Postconditions
// 	- Returns the string value of the city variable.
string Customer::getCity() {
	return city;
}

// Description
// 	- Function to set Customer state to a string value argument.
// Preconditions
//  - Argument must be a valid string, cannot be empty string.
// Postconditions
// 	- Returns true if the state is a valid string, and not empty.
//  - Returns false if the state is an empty string value.
//  - set state = to the argument newState.
bool Customer::setState(string newState) {
	if (newState == "")
		return false;
	state = newState;
	return true;
}

// Description
// 	- Function to return the string value of the Customer's state.
// Preconditions
//  - Customer must be created in memory.
//  - Customer must have a valid state set to a non-empty string.
// Postconditions
// 	- Returns the string value of the state variable.
string Customer::getState() {
	return state;
}

// Description
// 	- Function to set Customer zipCode to an integer value argument.
// Preconditions
//  - Argument must be a valid integer, cannot be equal to 0.
// Postconditions
// 	- Returns true if the zipCode is a valid integer, and not 0.
//  - Returns false if the zipCode is 0.
//  - set zipCode = to the argument newZip.
bool Customer::setZipCode(int newZip) {
	if (newZip == 0)
		return false;
	zipCode = newZip;
	return true;
}

// Description
// 	- Function to return the integer value of the Customer's zipCode.
// Preconditions
//  - Customer must be created in memory.
//  - Customer must have a valid zipCode set to a non-zero integer.
// Postconditions
// 	- Returns the integer value of the zipCode variable.
int Customer::getZipCode() {
	return zipCode;
}

// Description
// 	- Function to set Customer accountBalnace to a float value argument.
// Preconditions
//  - Argument must be a valid float, cannot be less than 0.
// Postconditions
// 	- Returns true if the accountBalance is a valid float, and not less than 0.
//  - Returns false if the accountBalance is less than 0.
//  - set accountBalance = to the argument newBalance.
bool Customer::setAccountBalance(float newBalance) {
	if (newBalance < 0)
		return false;
	accountBalance = newBalance;
	return true;
}

// Description
// 	- Function to return the float value of the Customer's accountBalnace.
// Preconditions
//  - Customer must be created in memory.
//  - Customer must have a valid accountBalance set to valid float.
// Postconditions
// 	- Returns the float value of the accountBalance variable.
float Customer::getAccountBalance() {
	return accountBalance;
}

Customer::~Customer() {

}
