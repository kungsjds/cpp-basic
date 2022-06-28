#include "person.h"

class Teacher : public Person {

private:
	float salary;

public:

	Teacher() {

		setName("Default");
		setCpf("000-000-000-00");
		setSalary(0.00);

	};

	Teacher(string name, string cpf, float salary) {

		setName(name);
		setCpf(cpf);
		setSalary(salary);

	};

	float getSalary() {

		return this->salary;

	};

	void setSalary(float salary) {

		this->salary = salary;

	};

};