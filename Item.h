#pragma once
#include"string.h"
#include"iostream"
using namespace std;

class Item
{
protected:
    string name;
    double price;
    string category;

public:
    Item();   //Default Constructor
    Item(string, double, string);    //Overloading Constructor
    //Insertion ,Exertion Functions
    friend ostream& operator<<(ostream&, Item&);
    friend istream& operator>>(istream&, Item&);
    //Setter Functions
    void setName();
    void setPrice();
    void setCategory();
    //Getter Functions
    string getName();
    double getPrice();
    string getCategory();
    //Displays all information of an Item
    void displayItem();
    //Destructor
    ~Item();
};

