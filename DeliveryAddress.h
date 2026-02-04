#pragma once
#include<iostream>
using namespace std;
#include "Customer.h"
#ifndef DELIVERYADDRESS_H
#define DELIVERYADDRESS_H
class DeliveryAddress
{
	Customer* c;
	string city;
	string address;
	string postalAddress;
public:
	DeliveryAddress(Customer&, string, string, string);
	DeliveryAddress();
	~DeliveryAddress();
	string getCity();
	string getAddress();
	string getPostalAddress();
	void displayDeliveryDetails();
};

#endif

