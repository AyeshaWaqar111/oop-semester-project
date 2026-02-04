#pragma once
#include "Order.h"
#include<iostream>
#include<string>
using namespace std;

#ifndef Table_H
#define table_H
class Table
{
	int totalTables;
	Order o;
public:
	Table();  //Default Constructor  
	~Table();  //Destructor
	void placeOrder(const Order&); //Placing Orders 
	void displayTableOrder(); //Display Order Details
	void displayTotalTables(); //Display Total Number of Tables
};
#endif

