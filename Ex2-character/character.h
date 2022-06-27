#include "user.h"

// Defines Subclass
class Character : public User {

private:
	int level;

public:

	Character() {

		setLevel(1);

	};

	Character(string name, string email, int level) {

		setName(name);
		setEmail(email);
		setLevel(level);

	};

	int getLevel() {

		return this->level;

	};

	void setLevel(int level) {

		this->level = level;

	};

	void levelUp(int level) {

		this->level += level;

	};

};