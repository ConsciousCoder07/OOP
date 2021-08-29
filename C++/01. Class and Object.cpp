#include <iostream>
using namespace std;

class Employee {
public:
	// Data
	string Name;
	string Company;
	int Age;

	// Method
	void IntroduceYourself() {
		cout << "My name is " << Name << endl;
		cout << "I work at " << Company << endl;
		cout << "I am " << Age << " years old" << endl;
	}
};

int main()
{ 
	// Creating object employee1 of class Employee
	Employee employee1;

	// Initializing data members or properties
	employee1.Name = "Daniel";
	employee1.Company = "Google";
	employee1.Age = 22;

	// Calling member function or method or behaviour
	employee1.IntroduceYourself();

	return 0;
}