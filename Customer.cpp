#include "Customer.h"
#include"Order.h"
#include"string.h"

Customer::Customer()
{
	name="";
	ID=0;
	email="";
	phone_no="";
}
Customer::Customer(string n, int id, string em, string ph,Order&new_ord)
{
	name = n;
	ID = id;
	email = em;
	phone_no = ph;
	ord = new_ord;
}
void Customer::setName()
{
	cout << "Enter name of customer: ";
	cin >> name;
}
void Customer::setID()
{
	cout << "ID of customer is: ";
	cin >> ID;
}

void Customer::setEmail()
{
	cout << "Enter email of customer: ";
	cin >> email;
}
void Customer::setPhone_no()
{
	cout << "Enter phone numebr of customer:";
	cin >> phone_no;
}
string Customer::getName()
{
	return name;
}
int Customer::getID()
{
	return ID;
}
string Customer::getEmail()
{
	return email;
}
string Customer::getPhone_no()
{
	return phone_no;
}

Customer::~Customer()
{
	cout << "Customer Destrcutor called!" << endl;
}

void Customer::displayCustomer(Order &ord)
{
	cout << "Name of customer: " << name<<endl;
	cout << "ID of customer: " << ID << endl;
	cout << "Email of Customer: " << email << endl;
	cout << "Phone Number of Customer : " << phone_no << endl;
	cout << "\tOrder placed by Customer: " << endl;
	ord.displayOrder();

}
ostream& operator<<(ostream& out, Customer& cus )
{
	cout << "Name of Customer: ";
	out << cus.name<<endl;
	cout << "ID of customer: ";
	out << cus.ID<<endl;
	cout << "Email of customer: ";
	out << cus.email;
	cout << "Phone Number of Customer: ";
	out << cus.phone_no<<endl;
	return out;

}
istream& operator>>(istream& in, Customer& cus)
{
	in >> cus.name;
	in >> cus.ID;
	in >> cus.email;
	in >> cus.phone_no;
	return in;
}