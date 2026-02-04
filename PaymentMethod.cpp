#include "PaymentMethod.h"
PaymentMethod::PaymentMethod(Customer& temp, string paymentType, int paymentStatus, string paymentDate) :
	paymentType(paymentType), paymentDate(paymentDate)
{
	objc = &temp;
	if (paymentStatus > 2 || paymentStatus <= 0)
	{
		cout << "Only two options for payment is available!" << endl;

	}
	paymentStatus = paymentStatus;



}
PaymentMethod::PaymentMethod() :paymentType(""), paymentStatus(false), paymentDate(""), objc(nullptr) {}

PaymentMethod::~PaymentMethod() {}

void PaymentMethod::displayPaymentDetails() {
	cout << "Customer Name is: " << objc->getName() << endl;
	cout << "Customer ID is: " << objc->getID() << endl;
	cout << "Customer Email is: " << objc->getEmail() << endl;
	cout << "Customer Phone Number is: " << objc->getPhone_no() << endl;
	cout << "Payment Type is: " << paymentType << endl;
	cout << "Enter Payment Status is: " << paymentStatus << endl;
	cout << "Enter Payment Date is:" << paymentDate << endl;

}
void PaymentMethod::updateDetails() {
	getPaymentDetails();
}

string PaymentMethod::displayPaymentMethod() {
	return paymentType;
}
int PaymentMethod::displayPaymentStatus() {
	return paymentStatus;
}
string PaymentMethod::displayPaymentDate() {
	return paymentDate;
}

void PaymentMethod::getPaymentDetails() {
	cout << "Name of Customer is: " << objc->getName() << endl;
	cout << "ID of Customer is: " << objc->getID() << endl;
	cout << "Email of Customer is: " << objc->getEmail() << endl;
	cout << "Phone Number of Customer is: " << objc->getPhone_no() << endl;
	cout << "Enter paymentType" << endl;
	cin >> paymentType;
	cout << "Enter paymentStatus" << endl;
	cin >> paymentStatus;
	cout << "Enter paymentDate" << endl;
	cin >> paymentDate;
}
