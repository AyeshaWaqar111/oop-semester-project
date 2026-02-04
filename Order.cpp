#include "Order.h"
#include"Item.h"

Order::Order()
{
    tableNumber = 0;
}
Order::Order(int no,int cap,int total)
{   
    capacity = cap;
    OrderedItems = total;
    tableNumber = no;
    items = new Item[capacity];
    for (int i = 0; i < OrderedItems; i++)
    {
        items[i].setName();
        items[i].setPrice();
        items[i].setCategory();
    }
}
Order::~Order()
{
    cout << "Order Destrcutor Called!" << endl;
    delete[]items;
    items = nullptr;
}
void Order::setTableNumber()
{
    do
    {
        cout << "Enter table number which gives order: ";
        cin >> tableNumber;
    } while (tableNumber <=0);
}
int Order::getTableNumber()
{
    return tableNumber;
}
void Order::addOrderItem(Item&item)
{
    if (OrderedItems == capacity)
    {
        capacity += 10;
        Item* newItems = new Item[capacity];
        for (int i = 0; i < OrderedItems; ++i)
        {
            newItems[i] = items[i];
        }
        delete[] items;
        items = newItems;
    }
    items[OrderedItems+1] = item;
    
}
void Order::getTotalBill()
{
    double total = 0;
    for (int i = 0; i < OrderedItems; ++i) 
    {
        total += items[i].getPrice();
    }
    cout << "Total Bill is: " << total << endl;
}

ostream& operator<<(ostream& out, Order& ord)
{
    cout << "Number of Items ordered: ";
    out << ord.OrderedItems << endl;
    cout << "Capacity of Array : ";
    out << ord.capacity << endl;
    cout << "Table Number is: ";
    out << ord.tableNumber << endl;
    return out;
}
istream& operator>>(istream&in, Order& ord)
{
    in >> ord.OrderedItems;
    in >> ord.capacity;
    in >> ord.tableNumber;
    return in;
}
void Order::displayOrder()  
{
    cout << "Order for Table " << tableNumber << endl;
    for (int i = 0; i < OrderedItems; ++i) 
    {
        
        cout << "Description of Item#" << i + 1 << endl;
        items[i].displayItem();
    }
    getTotalBill();
}
