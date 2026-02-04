#pragma once
#include"Item.h"
class Menue
{
	Item* itemList;
	int capacity;
	int totalItems;
public:
	Menue();   //Default Constructor
	Menue(int,int);  //Overloaded Constructor
	//Insertion,Exertion Functions
	friend ostream& operator<<(ostream&, Menue&);
	friend istream& operator>>(istream&, Menue&);
	//Add item in a menue
	void addItem(Item&);
	//Display all information of Menue
	void displayMenue();
	//Destructor
	~Menue();
};

