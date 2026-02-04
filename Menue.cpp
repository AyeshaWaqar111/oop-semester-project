#include "Menue.h"
#include"Item.h"
#include"iostream"

using namespace std;

Menue::Menue()
{
	capacity = 0;
	totalItems = 0;
}
Menue::Menue(int s, int c)
{
	totalItems = s;
	capacity = c;
	itemList = new Item[capacity];
	for (int i = 0; i < totalItems; i++)
	{
		itemList[i].setName();
		itemList[i].setPrice();
		itemList[i].setCategory();
	}
}
ostream& operator<<(ostream& out, Menue& me)
{
	cout << "Capacity of a menue is: ";
	out << me.capacity << endl;
	cout << "Total items availble in menue: ";
	out << me.totalItems << endl;
	for (int i = 0; i < me.totalItems; i++)
	{
		cout << "Detailes of item " << i + 1 << endl;
		out << me.itemList[i]<< endl;
	}
	return out;
}
istream& operator>>(istream& in, Menue& me)
{
	in >> me.capacity;
	in >> me.totalItems;
	for (int i = 0; i < me.totalItems; i++)
	{
		in >> me.itemList[i];
	}
	return in;
}
void Menue::addItem(Item &it)
{
	if (capacity == totalItems)
	{
		capacity += 10;
 		Item* items = new Item[capacity];
		for (int i = 0; i < totalItems; i++)
		{
			items[i] = itemList[i];
		}
		delete[]itemList;
		itemList=items;
	}
	itemList[totalItems + 1] = it;
}

void Menue::displayMenue()
{
	cout << "Menue Details: " << endl;
	for (int i = 0; i < totalItems; i++)
	{
		cout << "Item details of Item#" <<i+1<< endl;
	    itemList[i].displayItem();
	}
}
Menue::~Menue()
{
	cout << "Menue Destructor called!" << endl;
	delete[]itemList;
	itemList = nullptr;
}