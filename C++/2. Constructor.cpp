#include <iostream>
using namespace std;

class Employee {
public:
	string Name;
	string Company;
	int Age;

	// Constructor
	Employee(string name, string company, int age) {
		Name = name;
		Company = company;
		Age = age;
	}

	void IntroduceYourself() {
		cout << "My name is " << Name << endl;
		cout << "I work at " << Company << endl;
		cout << "I am " << Age << " years old" << endl;
	}
};

int main()
{ 
	// Creating object & initializing it using constructor
	Employee employee1 = Employee("Daniel", "Netflix", 20);
	
	employee1.IntroduceYourself();

	return 0;
}