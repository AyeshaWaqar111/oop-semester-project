#pragma once
#include<iostream>
#include "Customer.h"
#include"Order.h"
using namespace std;
#ifndef PAYMENTMETHOD_H
#define PAYMENTMETHOD_H
class PaymentMethod
{
	Customer* objc;
	string paymentType;
	int paymentStatus;
	string paymentDate;
public:
	PaymentMethod(Customer&, string, int, string);
	PaymentMethod();
	~PaymentMethod();
	//Setter
	void getPaymentDetails();
	void updateDetails();
	//Getter
	string displayPaymentMethod();
	int displayPaymentStatus();
	string displayPaymentDate();
	void displayPaymentDetails();

};
#endif


