#pragma once
#include <string>

using namespace std; // To use strings

class Player {

private:
	string name;
	int level;
	float power;

public:

	Player(string name, int level, float power) {

		this->name = name;
		this->level = level;
		this->power = power;

	};

	string getName() {

		return this->name;

	};

	void setName(string name) {

		this->name = name;

	};

	int getLevel() {

		return this->level;

	};

	void setLevel(int level) {

		this->level = level;

	};

	float getPower() {

		return this->power;

	};

	void setPower(float power) {

		this->power = power;

	};

};
