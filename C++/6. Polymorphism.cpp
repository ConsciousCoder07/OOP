#include <bits/stdc++.h>
using namespace std;


class AbstractEmployee {
	virtual void AskForPromotion()=0;
};

// Base or parent or super class
class Employee:AbstractEmployee {
private:
	string Company;
	int Age;
protected:
	string Name;
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

	virtual void Work() {
		cout << Name << " is checking email, task backlog, performing tasks..." << endl;
	}
};

// Derived or child class
class Developer:public Employee {
public:
	string FavProgrammingLanguage;
	Developer(string name, string company, int age, string favProgrammingLanguage) 
		:Employee(name, company, age)
	{
		FavProgrammingLanguage = favProgrammingLanguage;
	}

	void FixBug() {
		cout << getName() << " fixed bug using " << FavProgrammingLanguage << endl;
		cout << Name << " fixed bug using " << FavProgrammingLanguage << endl;
	}

	void Work() {
		cout << Name << " is writing " << FavProgrammingLanguage << " code" << endl;
	}
};

class Teacher:public Employee {
public:
	string Subject;
	Teacher(string name, string company, int age, string subject)
		:Employee(name, company, age)
	{
		Subject = subject;
	}

	void PrepareLesson() {
		cout << Name << " is preparing " << Subject << " lesson" << endl;
	}

	void Work() {
		cout << Name << " is teaching " << Subject << endl;
	}
};

int main()
{ 
	Developer developer1 = Developer("Usman", "XYZ", 34, "Javascript");
	Teacher teacher1 = Teacher("Habib", "AKA High School",32, "Economy");

	// Using pointers
	Employee *e1 = &developer1;
	Employee *e2 = &teacher1;

	e1->Work();
	e2->Work();

	return 0;
}

/*

POLYMORPHISM
- Polymorphism means having many forms. Basically same method but different implementations.
- The most common use of polymorphism is when a parent class reference is used to refer to a child class object.
- We make Work() as virtual function, so that if it is called then the most recent implementaion of that method
- If we don't make it virtual it would call the base class implementation.
- If we use teacher1.Work() or developer1.Work() then we don't need to make Work() a virtual function.

- In C++, we may not be able to override functions if we use a pointer of the base class to point to an object of the derived class.
- Using virtual functions in the base class ensures that the function can be overridden in these cases.
- Thus, virtual functions actually fall under function overriding.

*/ 