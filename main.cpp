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
#include <iomanip>


using namespace std;

void printTcg(); //function prototype that prints from users tcg collection
void loadCollection(); //function prototype that prints users card collection


struct Card {
	string name;
	string condition;
	double price;
	bool availability;
};

string tcg_selection[3] = {"yugioh", "pokemon", "digimon"};

	
Card yugioh_availability[5] = {
		{ "Blue eyes white dragon", "near mint", 1000.00, true },
		{ "Dark magician", "mint", 1500.00, false },
		{ "Red eyes black dragon", "bad", 20.00, true },
		{ "Stardust dragon", "near mint", 700.00, false },
		{ "Deocde talker", "good", 300.00, false },
	};
Card pokemon_availability[5] = {
		{ "Pikachu", "near mint", 980.00, true },
		{ "Charizard", "mint", 1750.00, false },
		{ "Mew", "good", 120.00, false },
		{ "Magikarp", "near mint", 860.00, false },
		{ "Greninja", "bad", 30.00, true },
	};

Card digimon_availability[5] = {
		{ "Omnimon", "mint", 1200.00, true },
		{ "Mastemon", "bad", 30.00, false },
		{ "WarGreymon", "bad", 15.00, true },
		{ "Necromon", "mint", 640.00, true },
		{ "Ryugumon", "good", 150.00, true },
	};

//maximum number of slectable tcg and cards to choose from so far
const int MAX_TCG = 3;
const int MAX_CARDS = 5;



int main() {

	

	string userName; //user login name
	string choiceX; //picks between options 1-5 while menu = true
	int tcgChoice; //selects between pokemon, yugioh, or digimon
	string viewCollection; //to check if user wants to view collection
   

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
		cout << "\n";
		cout << "WELCOME BACK   " << userName << "                " << endl;
		cout << "*********************************************" << endl;

		cout << "1. buy" << endl;
		cout << "2. sell" << endl;
		cout << "3. trade" << endl;
		cout << "4. view orders" << endl;
		cout << "5. view collection" << endl;

		cout << "*********************************************" << endl;

		cout << "ENTER YOUR CHOICE (X to quit): " << endl;
		cout << "\n";
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
			cout << "\n";
			for (int i = 0; i < 3; i++) {
				cout << i + 1 << ". " << tcg_selection[i] << endl;
				
			}
			cout << "\n";
			
			while (!(cin >> tcgChoice) || tcgChoice < 1 || tcgChoice > 3) {
				cout << "\nINVALID SELECTION (1. yugioh | 2. pokemon | 3. digimon)" << endl;
				cout << "\n";
				cin.clear();
				cin.ignore(1000, '\n');
			}
			
			if (tcgChoice == 1) {
				cout << "\nthis is the list of yugioh cards" << endl;
				for (int i = 0; i < 5; i++) {
					cout << i + 1 << ". " << yugioh_availability[i].name << " [ " << yugioh_availability[i].condition << " ] - $ " << yugioh_availability[i].price << endl;
					if (!yugioh_availability[i].availability)
						cout << "   <SOLD OUT>  " << endl;
				}
			}
				else if (tcgChoice == 2) {
					cout << "\nthis is the list of pokemon cards" << endl;
					for (int i = 0; i < 5; i++) {
						cout << i + 1 << ". " << pokemon_availability[i].name << " [ " << pokemon_availability[i].condition << " ] - $ " << pokemon_availability[i].price << endl;
						if (!pokemon_availability[i].availability)
							cout << "   <SOLD OUT>  " << endl;
					}
				}
				else if (tcgChoice == 3) {
					cout << "\nthis is the list of digimon cards" << endl;
					for (int i = 0; i < 5; i++) {
						cout << i + 1 << ". " << digimon_availability[i].name << " [ " << digimon_availability[i].condition << " ] - $ " << digimon_availability[i].price << endl;
						if (!digimon_availability[i].availability)
							cout << "   <SOLD OUT>  " << endl;
					}
				}
				else {
				cout << "\nINVALID SELECTION"  << endl;
				
				}
			


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
			cout << "\n Would you like to view your collection? " << endl;
			// i need the actual functions to play the text files
		}
		else {
			cout << "\nInvalid input " << endl;
		}
	}

		return 0;

}
// opens text file that displays availale tcg
void printTcg() {
	fstream infile("availableTcg.txt");

	int count = 0;

	if (!infile) {
		cout << "Error: no file found" << endl;
		return;
	}

	string availableTcg;
	cout << "These are the available TCG" << endl;

	while (count < MAX_TCG && getline(infile, availableTcg)) {
		cout << " --- " << availableTcg << " --- " << endl;
		count++;
	}
	infile.close();
}

// opens users collection text file and dispalys current collection
void loadCollection() {
	fstream infile("userCollection.txt");
	Card myCollection[MAX_CARDS];
	int cardCount = 0;

	if (!infile) {
		cout << "Error: no file found" << endl;
		return;
	}

	string tcgCollection;
	cout << "WOAH! NICE COLLECTION" << endl;

	while (cardCount < MAX_CARDS && infile >> myCollection[cardCount].name >> myCollection[cardCount].condition >> 
		myCollection[cardCount].price >> myCollection[cardCount].availability) {
		cout << myCollection[cardCount].name << " -$" << myCollection[cardCount].price << endl;
		
		cardCount++;
	}
	infile.close();
}