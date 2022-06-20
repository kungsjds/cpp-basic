#include <iostream>
#include <new>  // Used to allocate memory

using namespace std; // To use cout/cin

int main()
{

	int numRow, numColumn;

	cout << "Enter a number of rows: ";
	cin >> numRow;

	cout << "Enter a number of columns: ";
	cin >> numColumn;

	// Alloc the rows
	int** matrix = new int* [numRow];
	
	for (int i = 0; i < numRow; i++)
	{
		// Alloc the columns
		matrix[i] = new int[numColumn];

	};

	for (int i = 0; i < numRow; i++)
	{

		for (int j = 0; j < numColumn; j++)
		{

			cout << "\nEnter a value for matrix[" << i << "]" << "[" << j << "]: ";
			cin >> matrix[i][j];

		};

	};

	for (int i = 0; i < numRow; i++)
	{

		for (int j = 0; j < numColumn; j++)
		{

			cout << "\nMatrix[" << i << "]" << "[" << j << "] = " << matrix[i][j];

		};

	};

};