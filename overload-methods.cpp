#include <iostream>

using namespace std;

class Calculator {

private:


public:
	int sum(int val1, int val2) {

		return val1 + val2;

	};

	// Overload method. Same name but different params
	int sum(int val1, int val2, int val3) {

		return val1 + val2 + val3;

	};

};

int main() {

	Calculator calculator1;
	int result;

	result = calculator1.sum(5, 5);
	cout << "First method: " << result << endl;

	result = calculator1.sum(5, 10, 15);
	cout << "Orverload method: " << result << endl;

};