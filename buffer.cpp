#include <iostream>

// Libraries needed to clear the buffer
#include <ios>
#include <limits>

using namespace std; // To use cout/cin

int main()
{

	char phrase[80];

	// Clearing possible buffer garbage
	cin.sync();

	cout << "Enter a phrase: ";

	// Read the phrase with space
	cin.getline(phrase, 80);

	cout << "\nThe phrase is: " << phrase << '\n';

	// Clearing possible buffer garbage again, before reading a new phrase.
	cin.sync();

	cout << "\nEnter a new phrase: ";
	cin.getline(phrase, 80);

	cout << "\nNew phrase: " << phrase << "\n";

	return 0;

};