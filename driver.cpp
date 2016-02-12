//Name: Mavey Ma
//Created: Thursday, February 11, 2016
//CSS2A | Homework2 | Inventory Struct
/* Defines an Inventory struct type. 
Creates an array of 50 Inventory items, initialized to default values. 
Menu function:
	D - Display
		// Display all Inventory items. Do not display Inventory that is empty
	A - Add Inventory Item
		// Prompt user for all information. Read input and set up next available Inventory item 
		HINT: You need to keep track of how may Inventory items have been set up
	U - Update an Inventory item
		// Prompt user for a partNumber and use that to locate the Inventory item to update. 
	I - Display one Inventory item 
		// Prompt user for partNumber and display all information for that Inventory item
	Q - Quit
*/

#include<iostream>
#include<string>
#include<iomanip> //setw()
using namespace std;

struct Inventory {
	string partName;
	int partNumber;
	double price;
	int amountInStock;
	int amountToReorder;
};

void initialize(Inventory ary[], int n);
//SUMMARY: Show all Inventory items, but not empty ones.
//PRE: Takes in an Inventory struct type array, and an integer size of that array.
//POST: cout << to screen relevant information.

void display(Inventory ary[], int n);
//SUMMARY: Initializes array items with default values.
//PRE: Takes in an Inventory struct type array, and an integer size of that array.
//POST: Within array, string variables become empty "" and number variables become 0.

void addItem(Inventory ary[], int n);
//SUMMARY: Prompt user for info. Read and write input.
//PRE: Takes in an Inventory struct type array, and an integer size of that array.
//POST: Adds user info of item into inventory.

int main()
{
	const int SIZE = 50;
	Inventory itemAry[SIZE];
	initialize(itemAry, SIZE);

	itemAry[0].partName = "Sword";
	itemAry[0].partNumber = 13;
	itemAry[0].price = 20.99;
	itemAry[0].amountInStock = 2;
	itemAry[0].amountToReorder = 9;

	itemAry[1].partName = "Arrow";
	itemAry[1].partNumber = 14;
	itemAry[1].price = 1.99;
	itemAry[1].amountInStock = 25;
	itemAry[1].amountToReorder = 1;

	itemAry[2].partName = "Javelin";
	itemAry[2].partNumber = 6;
	itemAry[2].price = 123.50;
	itemAry[2].amountInStock = 2;
	itemAry[2].amountToReorder = 9;


	display(itemAry, SIZE);
	cout << "HELLO PETER PANDA!" << endl;
	return 0;
}//END MAIN

void initialize(Inventory ary[], int n)
{
	for (int i = 0; i < n; i++)
	{
		ary[i].partName = "";
		ary[i].partNumber = 0;
		ary[i].amountInStock = 0;
		ary[i].amountToReorder = 0;
		//ENSURE PRICE IS SHOWN TRADITIONALLY. e.g. $0.00
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		ary[i].price = 0;
	}//END FOR
	return;
}//END INITIALIZE DEFAULT VALUES

void display(Inventory ary[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (ary[i].partName == "")
		{
			return;
		}
		else
		{
			cout << "Name: " << ary[i].partName << endl;
			cout << "Number: " << "#" << ary[i].partNumber << endl;
			cout << "Price: " << "$" << ary[i].price << endl;
			cout << "Stock: " << ary[i].amountInStock << endl;
			cout << "Reorder: " << ary[i].amountToReorder << endl;
		}
	}//END FOR
	return;
}//END DISPLAY INVENTORY

void addItem(Inventory ary[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (ary[i].partName != "")
		{
			//LOOKING FOR NEXT EMPTY SLOT.
			//IF NOT EMPTY (OCCUPIED), GO TO NEXT.
			continue;
		}
		else
		{
			cout << "Enter Item Name: ";
			cin >> ary[i].partName;
			cout << "Enter Item Number: #";
			cin >> ary[i].partNumber;
			cout << "Enter Price: " << "$";
			cin >> ary[i].price;
			cout << "Enter Stock Count: ";
			cin >> ary[i].amountInStock;
			cout << "Enter Reorder Count: ";
			cin >> ary[i].amountToReorder;
		}
	}//END FOR
	return;
}//END ADD ITEM







