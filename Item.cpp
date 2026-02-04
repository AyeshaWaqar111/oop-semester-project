#include "Item.h"
#include"iostream"
#include"string.h"
using namespace std;

Item::Item()
{
    name="";
    price=0.0;
    category="";
}
Item::Item(string n, double p, string cat)
{
    name = n;
    price = p;
    category = cat;
}
void Item::setName()
{
    cout << "Enter name of Item: ";
    cin >> name;
}
void Item::setPrice()
{
    do
    {
        cout << "Enter price of Item: ";
        cin >> price;
    } while (price < 0);
}
void Item::setCategory()
{
    cout << "Enter category of Item: ";
    cin >> category;
}
ostream& operator<<(ostream&out, Item&it)
{  
    cout << "Name of Item: ";
   out << it.name;
   cout << "Price of Item: ";
   out << it.price;
   cout << "Category of Item: ";
   out << it.category;
   return out;
}
 istream& operator>>(istream&in, Item&it)
{
     in >> it.name;
     in >> it.price;
     in >> it.category;
     return in;
}
string Item::getName()
{
    return name;
}
double Item::getPrice()
{
    return price;
}
string Item::getCategory()
{
    return category;
}
void Item::displayItem()
{
    cout << "Name of Item: " << name << endl;
    cout << "Price of Item: " << price <<"$"<< endl;
    cout << "Category of Item: " << category << endl;
}

Item::~Item()
{
    cout << "Item Destructor called!" << endl;
}