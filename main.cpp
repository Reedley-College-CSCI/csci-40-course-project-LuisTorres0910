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
void cardDisplay(string tcgName, struct Card cards[], int size);

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
	char choiceX; //picks between options 1-5 while menu = true
	int tcgChoice; //selects between pokemon, yugioh, or digimon
	
   

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


		switch (choiceX) {
			case '1':
				cout << "\n Which TCG are you interested in buying?" << endl;
				cout << "\n";
				for (int i = 0; i < 3; i++) {
				cout << i + 1 << ". " << tcg_selection[i] << endl;

			}
			cout << "\n";
			cin >> tcgChoice;

			if (tcgChoice == 1) cardDisplay("yugioh", yugioh_availability, 5);
			else if (tcgChoice == 2) cardDisplay("yugioh", pokemon_availability, 5);
			else if (tcgChoice == 3) cardDisplay("yugioh", digimon_availability, 5);
			else cout << "Invalid TCG selection. " << endl;
			break;
			
			case '2':
			cout << "\n What items would you like to sell?" << endl;
			break;

			case '3':
			cout << "\n What items would you like to trade?" << endl;
			break;

			case '4':
				cout << "\n Enter orders you'd like to see" << endl;
				break;

			case '5':
				cout << "\n loading collection... " << endl;
				cout << "..." << endl;
				loadCollection();
				break;
			
			case 'X':
			case 'x':
				menu = false;
				break;
				
			default:
				cout << "\nInvalid input " << endl;
				break;
		}

	}

		return 0;
}

// function to display the cards for the tcg user selects to buy from
void cardDisplay(string tcgName, Card cards[], int size) {
	cout << "\n " << tcgName << " LIST \n";
	for (int i = 0; i < size; i++) {
			cout << i + 1 << ". " << cards[i].name << " [" << cards[i].condition
				<< "] - $" << fixed << setprecision(2) << cards[i].price;
			if (!cards[i].availability) cout << " <SOLD OUT>";
			cout << endl;
		}
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