#include <iostream>
#include <new> // Used to allocate memory

using namespace std;

int main()
{
	int size;

	cout << "Enter a vetor size: ";
	cin >> size;

	// Create a pointer for the vector
	int *vect = new int[size];

	for (int i = 0; i < size; i++) {

		cout << "Enter a vector value in position " << i << ": ";
		cin >> vect[i];

	}
	

	for (int i = 0; i < size; i++) {

		cout << "\nVector[" << i << "] = " << vect[i];

	}

	return 0;

}