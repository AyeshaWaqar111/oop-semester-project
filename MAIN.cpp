
#include "Customer.h"
#include "Item.h"
#include "Menue.h"
#include"Order.h"
#include "Table.h"
#include "DeliveryAddress.h"
#include "PaymentMethod.h"
#include "Review.h"


int main()
{
	int value;
	
		cout << "Enter 1 to display Menue!" << endl;
		cout << "Enter 2 for Adding and display Items!" << endl;
		cout << "Enter 3 for Getting Orders from Customer!" << endl;
		cout << "Enter 4 for Getting Reviews from Customer!" << endl;
		cout << "Enter 5 for Getting Delivery Address of Customer!" << endl;
		cout << "Enter 6 for Getting Payment of order from Customer!" << endl;
		cout << "Now Enter your choice: ";
		cin >> value;
		
		if (value == 2)
		{
			Item i1[3] =
			{
				Item("Biryani",12300,"Main Course"),Item("Qorma",12500,"Appetizer") ,Item("Custurd",22300,"Dessert")
			};
			for (size_t i = 0; i < 3; i++)
			{
				cout << "Item# " << i + 1 << " deatils: " << endl;
				i1[i].displayItem();
			}
			Order o1;
			o1.addOrderItem(i1[3]);
			cout << "Order Details after adding new item: " << endl;
			o1.displayOrder();
		}
		
		else if (value == 1)
		{
			Menue m1(2, 5);
		   m1.displayMenue();

		}

		else if (value == 3)
		{
			Order o1(3, 5, 1);
			Order o2(5, 8, 2);
			Customer c1[5] = { Customer("Ali Ahmed",1,"ali123@gmail.com","03001112223",o1),Customer("Ammar Hassan",3,"ammar09@gmail.com","03001112224",o2) };
			cout << "Order Placed by cutomer#1: " << endl;
			c1[0].displayCustomer(o1);
			cout << "Order Placed by cutomer#2: " << endl;
			c1[1].displayCustomer(o2);
		}
		else if (value == 4)
		{

			Order o1(3, 5, 1);
			Order o2(5, 8, 2);
			Customer c1[5] = { Customer("Ali Ahmed",1,"ali123@gmail.com","03001112223",o1),Customer("Ammar Hassan",3,"ammar09@gmail.com","03001112224",o2) };
			Review r1[2] = { Review(c1[0],o1,3,2,4,"23-December-2024","Good Quality!"),Review(c1[1],o2,4,5,5,"4-January-2024","Best Quality!") };
			for (int i = 0; i < 2; i++)
			{
				cout << "Review of Customer# " << i + 1 << endl;
				r1[i].displayReview();
			}
		}
		else if (value == 5)
		{
			Order o1(3, 1, 3);
			Order o2(3, 2, 8);
			Order o3(4, 3, 9);
			Customer c[3] = { Customer("Umar",7,"umar45@gmail.com","0325673481",o1),Customer("Frhan",5,"farhan@gmail.com","03256477123",o2),Customer("Pakiza",3,"pak536@gmail.com","03245477781",o3) };
			DeliveryAddress d1[3] = { DeliveryAddress(c[0],"Lahore","Gulshan Ravi","Gulshan Ravi street 1"),DeliveryAddress(c[1],"Muridke","Sultan Park","Mohalla Muhammad nagar street#1"),DeliveryAddress(c[2],"Sheikhpura","Ladies Park","Mohallah jam Nagar") };
			for (int i = 0; i < 3; i++)
			{
				cout << "Delivery Address for online order# " << i + 1 << endl;
				d1[i].displayDeliveryDetails();
		   }
		}

		else if (value == 6)
		{
			Order o1(3, 5, 1);
			Order o2(5, 8, 2);
			Order o3(3, 1, 3);
			Order o4(3, 2, 8);
			Order o5(4, 3, 9);
			Customer c1[5] = { Customer("Ali Ahmed",1,"ali123@gmail.com","03001112223",o1),Customer("Ammar Hassan",3,"ammar09@gmail.com","03001112224",o2),Customer("Umar",7,"umar45@gmail.com","0325673481",o3),Customer("Frhan",5,"farhan@gmail.com","03256477123",o4),Customer("Pakiza",3,"pak536@gmail.com","03245477781",o5) };
			PaymentMethod pay1[5] = { PaymentMethod(c1[0],"Cash",1,"23-January-2024"),PaymentMethod(c1[1],"Cash",1,"24-December"),PaymentMethod(c1[2],"Online",2,"3-February-2024"),
			PaymentMethod(c1[3],"Online",2,"4-March-2024"),PaymentMethod(c1[4],"Cash",1,"3-February-2024") };
			for (int i = 0; i < 5; i++)
			{
				cout << "Payment Details of Order# " <<i+1<< endl;
				pay1[i].displayPaymentDetails();
			}
		}
		else
		{
			cout << "Exit The Resturant!" << endl;
		}
	return 0;
}