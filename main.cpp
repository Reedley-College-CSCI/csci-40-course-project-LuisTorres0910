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

struct card {
	string name;
	string condition;
	double price;
	bool availability;
};

int main() {

	string tcg_selection[3] = {"yugioh", "pokemon", "digimon"};


	card yugioh_availabilty[5] = {
		{ "Blue eyes white dragon", "near mint", 1000.00, true },
		{ "Dark magician", "mint", 1500.00, false },
		{ "Red eyes black dragon", "bad", 20.00, true },
		{ "Stardust dragon", "near mint", 700.00, false },
		{ "Deocde talker", "good", 300.00, false },
		};
	card pokemon_availabilty[5] = {
		{ "Pikachu", "near mint", 980.00, true },
		{ "Charizard", "mint", 1750.00, false },
		{ "Mew", "good", 120.00, false },
		{ "Magikarp", "near mint", 860.00, false },
		{ "Greninja", "bad", 30.00, true },
	};

	card digimon_availabilty[5] = {
		{ "Omnimon", "mint", 1200.00, true },
		{ "Mastemon", "bad", 30.00, false },
		{ "WarGreymon", "bad", 15.00, true },
		{ "Necromon", "mint", 640.00, true },
		{ "Ryugumon", "good", 150.00, true },
	};

	string userName;
	string choiceX;
	int choice;
   

	cout << "				 	  --- CARD COLLECTION --- " << endl;
	cout << endl << "					  ENTER USERNAME TO LOGIN" << endl;
	cout << endl << "					**ENTER X TO EXIT PROGRAM**" << endl;
	cout << endl << " " << endl;
	getline(cin, userName);

	if (userName == "X" || userName == "x") {
		cout << "EXITING PROGRAM. HAVE A NICE DAY!" << endl;
		return 0;
	}


	bool menu = true;
	while (menu) {
		cout << "WELCOME BACK   " << userName << "                " << endl;
		cout << "*********************************************" << endl;

		cout << "1. buy" << endl;
		cout << "2. sell" << endl;
		cout << "3. trade" << endl;
		cout << "4. view orders" << endl;
		cout << "5. update profile" << endl;

		cout << "*********************************************" << endl;

		cout << " ENTER YOUR CHOICE (X to quit): " << endl;
		cin >> choiceX;

		if (choiceX == "X" || choiceX == "x") {
			cout << "Exiting program" << endl;
			menu = false;
		}
		else {
			menu = false;
		}


		if (choiceX == "1") {
			cout << "\n Which TCG are you interested in buying?" << endl;
		}
		else if (choiceX == "2") {
			cout << "\n What items would you like to sell?" << endl;
		}
		
		else if (choiceX == "3") {
			cout << "\n What items would you like to trade?" << endl;
		}

		else if (choiceX == "4") {
			cout << "\n Enter orders you'd like to see" << endl;
		}

		else if (choiceX == "5") {
			cout << "\n Would you like customize your collection or change UserName? " << endl;
		}
		else {
			cout << "\n Invalid input" << endl;
		}
	}


	


		return 0;

}