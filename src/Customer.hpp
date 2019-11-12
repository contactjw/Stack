#ifndef CUSTOMER_HPP_
#define CUSTOMER_HPP_
#include <iostream>
using namespace std;

class Customer {
private:
	int ID;
	string name;
	string address;
	string city;
	string state;
	int zipCode;
	float accountBalance;

public:
	Customer();
	bool setID(int);
	int getID();
	bool setName(string);
	string getName();
	bool setAddress(string);
	string getAddress();
	bool setCity(string);
	string getCity();
	bool setState(string);
	string getState();
	bool setZipCode(int);
	int getZipCode();
	bool setAccountBalance(float);
	float getAccountBalance();
	~Customer();
};

#endif
