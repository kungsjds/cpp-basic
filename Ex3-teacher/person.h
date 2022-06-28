#include <iostream>

using namespace std;

class Person {

private:
	string name;
	string cpf;

public:
	string getName() {

		return this->name;

	};

	void setName(string name) {

		this->name = name;

	};

	string getCpf() {

		return this->cpf;

	};

	void setCpf(string cpf) {

		this->cpf = cpf;

	};

};