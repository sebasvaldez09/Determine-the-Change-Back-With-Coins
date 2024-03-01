/////////////////////////////////////////////////////////////////////
//
// Name: Sebastian Valdez
// Due date: 2-28-2024
// Class: CSCI 1470.04
// Semester: Spring 2024
// CSCI 1470 Instructor: Gustavo Dietrich
//
// Using your own words describe below what the program does 
// Program Description: We are finding the change in cents
/////////////////////////////////////////////////////////////////////



#include <typeinfo>
#include <iostream>

using namespace std;

// Insert here the prototypes of the functions
void coinChanger(int cents, int & c25, int & c10, int & c05, int & c01, int & coincount);
void printChange(int cents, int c25, int c10, int c05, int c01, int coincount);


int main()
{
    // Declare variables amount (amount in cents), count25 (quantity of quarters), count10 (quantity of dimes),
	// count5 (quantity of nickels), count1 (quantity of pennies), and count (quantity of coins) to hold whole values
	int amount;
	int count25;
	int count10;
	int count5;
	int count1;
	int count;

    // Prompt the user to "Enter amount in cents to be returned as change: "
	cout << "Enter amount in cents to be returned as change: ";
    // Read the value from the keyboard and store it in the corresponding variable
	cin >> amount;
    // Call coinChanger() and printChange() to calculate the quantity of each type of coin and the total number of coins
	// that are needed to provide a given change
    coinChanger(amount, count25, count10, count5, count1, count);

    printChange(amount, count25, count10, count5, count1, count);
	
	return 0;
}

// Calculate the quantity of each type of coin and the total number of coins that are needed to provide a given change
// and return all these values along with the total number of coins that are needed for the change

void coinChanger(int cents, int & c25, int & c10, int & c05, int & c01, int & coincount)
{
    c25 = cents / 25;
    cents = cents % 25;
    
    c10 = cents / 10;
    cents = cents % 10;
    
    c05 = cents / 5;
    c01 = cents % 5;
    
    coincount = c25 + c10 + c05 + c01;
}

// Print the amount of cents, the quantity of each type of coin and the total number of coins 
// according to the format specifies on my handout
void printChange(int cents, int c25, int c10, int c05, int c01, int coincount)
{
    cout << endl << "You need to use " << coincount << " for a change of " << cents << " cents:" << endl;
    cout << c25 << " Quarters" << endl;
    cout << c10 << " Dimes" << endl;
    cout << c05 << " Nickels" << endl;
    cout << c01 << " Pennies" << endl;
}

