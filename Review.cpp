#include "Review.h"
Review::Review(Customer& tempc, Order& tempo, int foodQualityRating, int serviceQualityRating, int overallQualityRating, string reviewDate, string reviewText) :
	foodQualityRating(foodQualityRating), serviceQualityRating(serviceQualityRating), overallQualityRating(overallQualityRating), reviewDate(reviewDate), reviewText(reviewText)
{

	cus = &tempc;
	order = &tempo;

}
Review::Review() :cus(nullptr), order(nullptr), foodQualityRating(0), serviceQualityRating(0), overallQualityRating(0), reviewDate(""), reviewText("")
{
}
Review::~Review()
{
	cout << "Review Destructor!" << endl;
}
void Review::getReview()
{

	while (true)
	{
		cout << "Enter Food Quality Rating From 1-5" << endl;
		cin >> foodQualityRating;
		if (foodQualityRating > 0 && foodQualityRating < 6)
		{
			break;
		}
	}

	while (true)
	{
		cout << "Enter Service Quality Rating from 1-5" << endl;
		cin >> serviceQualityRating;
		if (serviceQualityRating > 0 && serviceQualityRating < 6)
		{
			break;
		}
	}

	while (true)
	{
		cout << "Enter Overall Quality Rating from 1-5" << endl;
		cin >> overallQualityRating;
		if (overallQualityRating > 0 && overallQualityRating < 6)
		{
			break;
		}
	}
}
void Review::updateReview()
{
	getReview();

}
void Review::displayReview()
{

	cout << "Food Quality Rating From 1 - 5 is: " << foodQualityRating << endl;
	cout << "Service Quality Rating From 1 - 5 is: " << serviceQualityRating << endl;
	cout << "Overall Quality Rating From 1 - 5 is: " << overallQualityRating << endl;
	cout << "Review date is :" << reviewDate << endl;
	cout << "Review Text is :" << reviewText << endl;
}

int Review::displayFoodQualityRating()
{
	return foodQualityRating;
}
int Review::displayServiceQualityRating()
{
	return serviceQualityRating;
}
int Review::displayOverallQualityRating()
{
	return overallQualityRating;
}
string Review::displayReviewDate()
{
	return reviewDate;
}
string Review::displayReviewText()
{
	return reviewText;
}


