//Name: Mavey Ma
//Created: Thursday, February 11, 2016
//CSS2A | Homework2 | Inventory Struct
/* Defines an Inventory struct type. 
Creates an array of 50 Inventory items, initialized to default values. 
Menu function:
	D - Display
	A - Add Inventory Item
	U - Update an Inventory item
	I - Display one Inventory item 
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
//POST: cout << to screen entire inventory with info.

void display(Inventory ary[], int n);
//SUMMARY: Initializes array items with default values.
//PRE: Takes in an Inventory struct type array, and an integer size of that array.
//POST: Within array, string variables become empty "" and number variables become 0.

void addItem(Inventory ary[], int n);
//SUMMARY: Prompt user for info and add new item to inventory.
//PRE: Takes in an Inventory struct type array, and an integer size of that array.
//POST: User input gets written as info of new inventory item.

void updateItem(Inventory ary[], int n);
//SUMMARY: Update an Inventory item; Prompt user for a partNumber and use that to locate the Inventory item to update.
//PRE: Takes in an Inventory struct type array, an integer size of that array.
//POST: Allows user access to change to change any part of the item.

void displayOne(Inventory ary[], int n);
//SUMMARY: Prompt user for partNumber and display all info for that Inventory item.
//PRE: Takes in an Inventory struct type array, an integer size of that array.
//POST: cout << to screen just one item with info.

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

	addItem(itemAry, SIZE);
	display(itemAry, SIZE);
	updateItem(itemAry, SIZE);
	display(itemAry, SIZE);
	displayOne(itemAry, SIZE);

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
	cout << "* * * * YOUR INVENTORY * * * *" << endl;
	cout << "------------------------------" << endl;
	for (int i = 0; i < n; i++)
	{
		if (ary[i].partName == "")
		{
			cout << "* * * * YOUR INVENTORY * * * *" << endl;
			cout << endl;
			break;
		}
		else
		{
			cout << "Name: " << ary[i].partName << endl;
			cout << "Number: " << "#" << ary[i].partNumber << endl;
			cout << "Price: " << "$" << ary[i].price << endl;
			cout << "Stock: " << ary[i].amountInStock << endl;
			cout << "Reorder: " << ary[i].amountToReorder << endl;
			cout << "------------------------------" << endl;
		}
	}//END FOR
	return;
}//END DISPLAY INVENTORY

void addItem(Inventory ary[], int n)
{
	cout << "+ + + + +ADD NEW ITEM+ + + + +" << endl;
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
			break;
		}
	}//END FOR
	cout << "+ + + + +ADD NEW ITEM+ + + + +" << endl;
	cout << endl;
	return;
}//END ADD ITEM

void updateItem(Inventory ary[], int n)
{
	int val;
	cout << "@ @ @ @UPDATE ITEM INFO@ @ @ @" << endl;
	cout << "Enter item number, please: ";
	cin >> val;

	for (int i = 0; i < n; i++)
	{
		if (ary[i].partNumber != val)
		{
			//LOOKING FOR USER'S PART NUMBER (VAL)
			//IF NOT VAL (WRONG ITEM), GO TO NEXT.
			continue;
		}
		else
		{
			cout << ". . . . ." << endl;
			cout << "Old Item Name: " << ary[i].partName << endl;
			cout << "Enter New Item Name: ";
			cin >> ary[i].partName;
			cout << ". . . . ." << endl;
			cout << "Old Item Number: " << ary[i].partNumber << endl;
			cout << "Enter New Item Number: #";
			cin >> ary[i].partNumber;
			cout << ". . . . ." << endl;
			cout << "Old Price: " << ary[i].price << endl;
			cout << "Enter New Price: " << "$";
			cin >> ary[i].price;
			cout << ". . . . ." << endl;
			cout << "Old Stock Count: " << ary[i].amountInStock << endl;
			cout << "Enter New Stock Count: ";
			cin >> ary[i].amountInStock;
			cout << ". . . . ." << endl;
			cout << "Old Stock Count: " << ary[i].amountToReorder << endl;
			cout << "Enter New Reorder Count: ";
			cin >> ary[i].amountToReorder;
			cout << ". . . . ." << endl;
			cout << "@ @ @ @UPDATE ITEM INFO@ @ @ @" << endl;
			cout << endl;
			break;
		}
	}//END FOR
	return;
}//END UPDATE ITEM

void displayOne(Inventory ary[], int n)
{
	int val;
	cout << "# # # # VIEW ITEM INFO # # # #" << endl;
	cout << "Enter item number, please: ";
	cin >> val;

	for (int i = 0; i < n; i++)
	{
		if (ary[i].partNumber != val)
		{
			//LOOKING FOR USER'S PART NUMBER (VAL)
			//IF NOT VAL (WRONG ITEM), GO TO NEXT.
			continue;
		}
		else
		{
			cout << "Name: " << ary[i].partName << endl;
			cout << "Number: " << "#" << ary[i].partNumber << endl;
			cout << "Price: " << "$" << ary[i].price << endl;
			cout << "Stock: " << ary[i].amountInStock << endl;
			cout << "Reorder: " << ary[i].amountToReorder << endl;
			cout << "# # # # VIEW ITEM INFO # # # #" << endl;
			cout << endl;
			break;
		}
	}//END FOR
	return;
}//END DISPLAY ONE ITEM






