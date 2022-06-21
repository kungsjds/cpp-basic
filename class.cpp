#include <iostream>

using namespace std; // To use cout/cin

class Player { // Defines the class called Player

public: // Defines public attributes
	int level; // Attributes
	float power;
	string name;

};

int main()
{

	Player player1; // Create a player class object

	cout << "Enter a player name: ";
	cin >> player1.name;

	cout << "\nEnter a player level: ";
	cin >> player1.level;

	cout << "\nEnter a player power: ";
	cin >> player1.power;

	cout << "\nName: " << player1.name;
	cout << "\nLevel: " << player1.level;
	cout << "\nPower: " << player1.power;

	return 0;

}