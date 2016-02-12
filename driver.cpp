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

int main()
{
	const int SIZE = 50;
	Inventory itemAry[SIZE];


	cout << "HELLO PETER PANDA!" << endl;
	return 0;
}//END MAIN









