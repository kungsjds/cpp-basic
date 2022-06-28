#include <iostream>
#include "teacher.h"
#include <string>

using namespace std;

int main() {

	Person person1;

	person1.setName("Kratos");
	person1.setCpf("999-999-999-99");

	Teacher teacher1("Zeus", "555-555-555-55", 560.60);

	cout << "Person 1: " << "Name: " << person1.getName() << " CPF: " << person1.getCpf() << endl;

	cout << "Teacher 1: " << "Name: " << teacher1.getName() << " CPF: " << teacher1.getCpf() << " Salary: " << teacher1.getSalary() << endl;

	return 0;

};