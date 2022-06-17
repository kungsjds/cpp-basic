#include <iostream>

using namespace std; // Allow cout and cin

void readPrintValues()
{
	int a, b;
	string c;

	// Reading values
	cout << "Enter an integer value: ";
	cin >> a;

	cout << "Enter an another integer value: ";
	cin >> b;

	cout << "Enter a string value: ";
	cin >> c;

	// Printing values
	cout << "Value 1: " << a << "\nValue 2: " << b;
	cout << "\nString: " << c;

}