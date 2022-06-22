#include <iostream>
#include <string>

using namespace std; // To use cout/cin

class Player {

public:
	string name;
	int level;
	float power;
	string* bag = new string[3];

	Player() {

		cout << "->Created wizard player<-";

		this->name = "Kungs";
		this->level = 999;
		this->power = 9999;
		this->bag[0] = "Life potion";
		this->bag[1] = "Mana Potion";
		this->bag[2] = "Power Potion";
		
	};

	// Created a void method
	void castAtkSpell(string spell) {
		
		cout << "Casting atk spell: " << spell << "\n";
	

	};

	// Another void method
	void castDefSpell(string spell) {

		cout << "Casting def spell: " << spell << "\n";

	};

	// Method with string return
	string getItemBag(int position) {

		return this->bag[position];

	};

};

int main() {

	string atkSpell, defSpell, item;
	int positionBag;

	Player player1;

	cout << "\nName: " << player1.name;
	cout << "\nLevel: " << player1.level;
	cout << "\nPower: " << player1.power;
	cout << "\nItems: " << "3" << "\n";

	cout << "Enter a bag position to get an item: ";
	cin >> positionBag;

	item = player1.getItemBag(positionBag);
	cout << "Selected item: " << item;

	cin.ignore();
	cout << "\nEnter an atk spell: ";
	getline(cin, atkSpell);

	cout << "\nEnter an def spell:";
	getline(cin, defSpell);

	player1.castAtkSpell(atkSpell);
	player1.castDefSpell(defSpell);

	return 0;

};