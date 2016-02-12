//Name: Mavey Ma
//Created: Thursday, February 11, 2016
//CSS2A | Homework2 | Inventory Struct
/* Define an Inventory struct type.
1. Create a program that contains an array of 50 Inventory items.
2. Initialize all 50 items with default values 
(empty strings for the string variables, 0 for the number variables).
3. Menu function
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
#include<cstdlib>
#include<string>
using namespace std;

struct Inventory {
	string partName;
	int partNumber;
	double price;
	int amountInStock;
	int amountToReorder;
};
void initialize(Inventory ary[], int n);

int main()
{
	const int SIZE = 50;
	Inventory itemAry[SIZE];

	
	initialize(itemAry, SIZE);
	cout << itemAry[0].partName << endl;
	cout << itemAry[1].partNumber << endl;
	cout << itemAry[3].price << endl;
	cout << itemAry[33].amountInStock << endl;
	cout << itemAry[49].amountToReorder << endl;

	cout << "HELLO PETER PANDA!" << endl;
	return 0;
}//END MAIN

void initialize(Inventory ary[], int n)
{
	for (int i = 0; i < n; i++)
	{
		ary[i].partName = "BREAD IS AWESOME.";
		ary[i].partNumber = 0;
		ary[i].price = 0.00;
		ary[i].amountInStock = 0;
		ary[i].amountToReorder = 0;
	}//END FOR LOOP
	return;
}//END INITIALIZE DEFAULT VALUES








