#include <iostream>
#include "character.h"
#include <string>

using namespace std;

int main() {

	string name, email;
	int level;

	cout << "Enter a name: ";	
	getline(cin, name);

	cout << "\nEnter an email: ";	
	cin.sync();
	getline(cin, email);

	cout << "\nEnter a level: ";
	cin >> level;

	// Create the object
	Character character1(name, email, level);

	cout << "Name: " << character1.getName() << endl;
	cout << "Email: " << character1.getEmail() << endl;
	cout << "Level: " << character1.getLevel() << endl;

	cout << "Level Up +10" << endl;
	character1.levelUp(10);
	cout << "New Level: " << character1.getLevel() << endl;

	return 0;

};