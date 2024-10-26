#ifndef ITEM_H //helps with linking
#define ITEM_H //helps with linking
#include <iostream>
#include <string>


using namespace std;

class item { //a class for all inventory items
public: //CONSTRUCTOR
	item(string iName, double oPrice) { //each item in inventory has a name and a price
		itemName = iName;
		originalPrice = oPrice;
	}

private: //MEMBERS
	string itemName;
	double originalPrice;

public: //STATIC MEMBER
	static double discountMultiplier; //the static/unchanging value of the discount, which is defined at the beginning of the .cpp file

public: //FUNCTIONS
	static void setDiscount() { //changes discountMultiplier to a decimal value that will calculate discount
		discountMultiplier = 1 - (discountMultiplier / 100);
	}
	string getName() { //getter - gets name of item
		return itemName;
	}
	double getOPrice() { //getter - gets price of item
		return originalPrice;
	}
	double getDiscPrice() { //getter - gets discounted price of item
		return discountMultiplier * originalPrice;
	}
};
#endif //helps with linking

