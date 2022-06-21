#include <iostream>
#include <ios>
#include <limits>

using namespace std;

class Player {

public:
	string name;
	int level = 1;
	int power = 1;

	// Mult constructors

	// Constructor method without param
	Player() {

		printf("Created object without param!\n");

	};

	// Constructor method with one param
	Player(string name) {

		printf("Created object with 1 param!\n");
		this->name = name;

	};

	// Constructor method with 2 params
	Player(string name, int level) {

		printf("Created object with 2 params!\n");
		this->name = name;
		this->level = level;

	}

	// Constructor method with 3 params
	Player(string name, int level, int power) {

		printf("Created object with 3 params!\n");
		this->name = name;
		this->level = level;
		this->power = power;

	}

};

int main()
{

	string name;
	int level, power;

	cout << "Enter a name: ";
	cin >> name;

	cout << "\nEnter a level: ";
	cin >> level;

	cout << "\nEnter a power: ";
	cin >> power;

	// Create a player object whithout param (Constructor 1)
	Player player1;

	// Create a player object with 1 param (Constructor 2)
	Player player2(name);

	// Create a player object with 2 param (Constructor 3)
	Player player3(name, level);

	// Create a player object with 3 param (Constructor 4)
	Player player4(name, level, power);

	cout << "\nPlayer 1: Name = " << player1.name << ", Level = " << player1.level << ", Power = " << player1.power;

	cout << "\nPlayer 2: Name = " << player2.name << ", Level = " << player2.level << ", Power = " << player2.power;

	cout << "\nPlayer 3: Name = " << player3.name << ", Level = " << player3.level << ", Power = " << player3.power;

	cout << "\nPlayer 4: Name = " << player4.name << ", Level = " << player4.level << ", Power = " << player4.power;

	/*cout << "Enter a name: ";
	cin >> player1.name;

	cin.sync();

	cout << "\nEnter a level: ";
	cin >> player1.level;

	cout << "\nEnter a power: ";
	cin >> player1.power;

	cout << "\nName: " << player1.name;
	cout << "\nLevel: " << player1.level;
	cout << "\nPower: " << player1.power;*/


}