#include "DeliveryAddress.h"
#include<iostream>
using namespace std;
DeliveryAddress::DeliveryAddress() :c(nullptr), city(""), address(""), postalAddress("") {}

DeliveryAddress::DeliveryAddress(Customer& temp1, string city, string address, string postalAddress) :
	city(city), address(address), postalAddress(postalAddress) {
	c = &temp1;
}
DeliveryAddress::~DeliveryAddress() {}
void DeliveryAddress::displayDeliveryDetails() {
	cout << "City is: " << city << endl;
	cout << "Address is: " << address << endl;
	cout << "Postal Address is: " << postalAddress << endl;

}

string DeliveryAddress::getCity() {
	return city;
}
string DeliveryAddress::getAddress() {
	return address;
}
string DeliveryAddress::getPostalAddress() {
	return postalAddress;
}

