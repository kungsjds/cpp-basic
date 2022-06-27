#include <iostream>
#include "dog.h"

using namespace std;

int main() {
	
	string ground, breed;
	int monthsGestation;

	cout << "Enter a ground: ";
	cin >> ground;

	cout << "Enter a breed: ";
	cin >> breed;

	cout << "Enter the months gestation: ";
	cin >> monthsGestation;

	// Create a Dog object. Constructor with params.
	Dog dog1(ground, monthsGestation, breed);

	cout << "Ground:" << dog1.getGround() << "\nBreed: " << dog1.getBreed() << "\nMonths: " << dog1.getMonthsGestation();

	// Calls the bark method
	cout << "\n";
	dog1.bark();

};