#pragma once
#include"Item.h"

class Order
{
protected:
	Item* items;
	int OrderedItems;
	int capacity;
	int tableNumber;
public:
	Order();              //Default Constructor
	Order(int,int,int);   //Overloading Constructor
	~Order();             //Destructor
	//Setter Functions
	void setTableNumber();
	//Getter Function
	int getTableNumber();
	//Add items  in order
	void addOrderItem(Item&);
	//Display total bill of order
	void getTotalBill();
	//Insertion ,Exertion Functions
	friend ostream& operator<<(ostream&, Order&);
	friend istream& operator>>(istream&, Order&);
	//Displays all information of a Order
	void displayOrder();

};

