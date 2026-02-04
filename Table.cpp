#include "Table.h"
#include "Order.h"

#include<iostream>
using namespace std;



Table::Table() {
	totalTables = 14;
}

Table::~Table() {}

void Table::placeOrder(const Order& d) {
	o = d;
}

void Table::displayTableOrder() {

	o.displayOrder();
}

void Table::displayTotalTables() {
	cout << totalTables << endl;
}
