#include <bits/stdc++.h>
using namespace std;

class Employee {
private:
	string Name;
	string Company;
	int Age;
public:
	// CONSTRUCTOR
	Employee(string name, string company, int age) {
		Name = name;
		Company = company;
		Age = age;
	}

	// SETTERS
	void setName(string name) { 
		Name = name;
	}
	void setCompany(string company) {
		Company = company;
	}
	void setAge(int age) {
		if (age >= 18){
			Age = age;
		} else {
			cout << "Age must be greater than 18";
		}
	}

	// GETTERS
	string getName() { 
		return Name;
	}
	string getCompany() {
		return Company;
	}
	int getAge() {
		return Age;
	}

	void IntroduceYourself() {
		cout << "My name is " << Name << endl;
		cout << "I work at " << Company << endl;
		cout << "I am " << Age << " years old" << endl;
	}
};

int main()
{ 
	Employee employee1 = Employee("Daniel", "Netflix", 22);
	employee1.IntroduceYourself();

 	// Changing private data through public methods (getters, setters) to implement encapsulation
	employee1.setAge(44);
	cout << employee1.getName() << " is " << employee1.getAge() << " years old" << endl;

	return 0;
}

// The idea of encapsulation is to not allow anyone to manipulate the data of the class directly
// So we use getters & setters for that purpose.
// We can further add validations to setters to take only a certain type of data to assign the data or property
// e.g. Employee can't have age lesser than 18