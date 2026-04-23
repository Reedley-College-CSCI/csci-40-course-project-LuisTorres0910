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

//added struct to hold card information
struct card {
	string name;
	string condition;
	double price;
	bool availability;
};

int main() {

	string userName;
	string choice;
   
	//this is to ask if they are existing user or a new user
	//ask if they want to login
	cout << "				 	  --- CARD COLLECTION --- " << endl;
	cout << endl << "					  ENTER USERNAME TO LOGIN" << endl;
	cout << endl << "					**ENTER X TO EXIT PROGRAM**" << endl;
	cout << endl << " " << endl;
	cin >> userName;

	if (userName == "X") {
		cout << "EXITING PROGRAM. HAVE A NICE DAY!" << endl;
		return 1;
	}
	// i need to fix input for username
	while (userName != "X") {
		cout << "      " << "WELCOME BACK   " << userName << "                " << endl;
		cout << "*********************************************" << endl;

		cout << "1. buy" << endl;
		// if user wants to buy, ask if they want to buy products or single cards


		cout << "2. sell" << endl;
		cout << "3. trade" << endl;
		cout << "4. view orders" << endl;
		cout << "5. update profile" << endl;

		cout << "*********************************************" << endl;

		cout << "ENTER YOUR CHOICE" << endl;
		cin >> choice;
	}

	

		return 0;

}