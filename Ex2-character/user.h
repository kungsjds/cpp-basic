#include <iostream>

using namespace std;

// Defines Superclass
class User {

private:
	string name;
	string email;

public:

	User() {

		setName("Default");
		setEmail("Default");

	};

	string getName() {

		return this->name;
		
	};

	void setName(string name) {

		this->name = name;

	};

	string getEmail() {

		return this->email;

	};

	void setEmail(string email) {

		this->email = email;

	};

};