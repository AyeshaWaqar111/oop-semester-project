
#pragma once
#include "Customer.h"
#ifndef REVIEW_H
#define REVIEW_H
class Review
{
	Customer* cus;
	Order* order;
	int foodQualityRating;
	int serviceQualityRating;
	int overallQualityRating;
	string reviewDate;
	string reviewText;
public:
	Review(Customer&, Order&, int, int, int, string, string);
	Review();
	~Review();
	//Getter Functions
	void getReview();
	void updateReview();
	//Setter Functions
	void displayReview();
	int displayFoodQualityRating();
	int displayServiceQualityRating();
	int displayOverallQualityRating();
	string displayReviewDate();
	string displayReviewText();
};
#endif

