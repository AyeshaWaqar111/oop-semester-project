#pragma once
#include"iostream"
#include"Order.h"
#include"string.h"
using namespace std;

class Customer
{
protected:
	string name;
	int ID;
	string email;
	string phone_no;
	Order ord;
public:
	Customer();   //Default Constructor
	Customer(string, int, string, string,Order&);    //Overloading Constructor
	                //Setter Functions
	void setName();        
	void setID();
	void setEmail();
	void setPhone_no();
	                //Getter Functions
	string getName();
	int getID();
	string getEmail();
	string getPhone_no();
	               //Displays all information of a Customer
	void displayCustomer(Order&);
	              //Destructor
	~Customer();
	            //Insertion ,Exertion Functions
	friend ostream& operator<<(ostream&, Customer&);
	friend istream& operator>>(istream&, Customer&);
};

