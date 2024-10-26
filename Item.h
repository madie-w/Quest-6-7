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

// Quest6-7B.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Item.h"
#include <string>

using namespace std;

//Add Items Global Function
void additemsToList(vector<item>inventory) { 
    cout << "How many items would you like to add to your inventory?" << endl;
    int itemcount;
    cin >> itemcount;

    //Creates Item Objects
    for (int index = 1; index < itemcount; index++) {
        item item(itemName, originalPrice);
        cout << "What is the name of the item? " << endl;
        cin >> item.getName();
        cout << "What is the price of the item? " << endl;
        cin >> item.getOPrice();
        vector.push_back(item);
    }
}
//Print Inventory Global Function
void printInventory(vector<item>inventory) {
     for (item : item) {
         cout << item << endl;
        }
    }

int main()
{ 
    //Reads Inventory
    vector<item>inventory;

    //Call Global Function: Add Items and Discount The Items
    addItemsToList(inventory);
    item::setDiscount(20);

    //Call Global Function: Print Inventory
    printInventory(inventory);


}
