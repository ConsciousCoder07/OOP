#include <bits/stdc++.h>
using namespace std;

// Base
class AbstractEmployee {
	virtual void AskForPromotion()=0;
};

// Derived 
class Employee:AbstractEmployee {
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

	void AskForPromotion() {
		if(Age > 30) {
			cout << Name << " got promoted!" << endl;
		} else {
			cout << Name << ", sorry no promotion :(" << endl;
		}
	}
};

int main()
{ 
	Employee employee1 = Employee("Daniel", "ABC", 22);
	Employee employee2 = Employee("Ali", "XYZ", 32);
	
	employee1.AskForPromotion();
	employee2.AskForPromotion();

	return 0;
}

/*

- AbstractEmployee is the interface between the user and the Employee class.
- If someone wants to use Employee class he'll refer AbstractEmployee class.
- The implementation details of Employee class is hidden from the user using the concept of Abstraction.
- Employee class inherits AbstractEmployee class.
- It overrides the virtual function(overridable or inheritable function) in it.

*/ 