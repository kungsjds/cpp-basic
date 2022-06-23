#include <iostream>
#include <string>
#include "player.h"

int main() {

	Player player1("Kungs", 99, 999.99);

	cout << "Name: " << player1.getName() << "\n";
	cout << "Level: " << player1.getLevel() << "\n";
	cout << "Power: " << player1.getPower() << "\n";

	player1.setName("Dumbledore");
	player1.setLevel(99);
	player1.setPower(999.99);

	cout << "Name: " << player1.getName() << "\n";
	cout << "Level: " << player1.getLevel() << "\n";
	cout << "Power: " << player1.getPower() << "\n";

	return 0;

};