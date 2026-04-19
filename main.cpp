// CSCI-40 Final Project
// Author: [Luis Torres]

/* 
 * Description: this is an inventory management system for personal collection tracker (trading cards)
 * users get to input name of cards they are looking for. it should output the price, condition, and availability
 * it should also sort from highest to lowest / lowest to highest
*/

#include <iostream>
#include <string>
#include <fstream>


using namespace std;

int main() {

	int userName;
	int choice;
   
	//this is to ask if they are existing user or a new user
	//ask if they want to login
	cout << " --- CARD COLLECTION --- " << endl;
	cout << endl << "ENTER USERNAME TO LOGIN" << endl;
	cout << endl << "ENTER QUIT TO EXIT PROGRAM" << endl;
	






	//setup for the interface for the inventory management system

	cout << "      " << "WELCOME BACK   " << "username" << "                " << endl;
	cout << "*********************************************" << endl;

	//ask if it wants to buy, sell, trade, view orders, update cards
	//make this into a while loop to press 1 for buy, 2. sell, etc and press x to quit out of program

	cout << "1. buy" << endl;
	// if user wants to buy, ask if they want to buy products or single cards


	cout << "2. sell" << endl;
	cout << "3. trade" << endl;
	cout << "4. view orders" << endl;
	cout << "5. update profile" << endl;

	cout << "*********************************************" << endl;

	cout << "ENTER YOUR CHOICE" << endl;



		return 0;

}