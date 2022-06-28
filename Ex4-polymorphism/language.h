#include <iostream>

using namespace std;

// Superclass
class Language {

public:
	void salute() {

	};

};

// Subclass with polymorphism methods.
class French : public Language {

public:
	void salute() {

		cout << "Bonjour heureux de vous rencontrer" << endl;

	};

};

class Portuguese : public Language {

public:
	void salute() {

		cout << "Ola prazer em conhece-lo" << endl;

	};

};

class English : public Language {

public:
	void salute() {

		cout << "Hello, nice to meet you!" << endl;

	};

};