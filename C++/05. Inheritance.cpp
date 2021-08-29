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
};

int main()
{ 
	Developer developer1 = Developer("Usman", "XYZ", 34, "Javascript");
	developer1.FixBug();
	developer1.AskForPromotion();

	Teacher teacher1 = Teacher("Habib", "AKA High School",32, "Economy");
	teacher1.PrepareLesson();
	teacher1.AskForPromotion();

	return 0;
}

/*

INHERITANCE
- Developer class & Teacher class inherit Employee class which is implementation of AbstractEmployee class
- To access data memebers of base class from derived class without using getters, we make that member protected
- The member function of Employee class, AskForPromotion is also not accessible to developer1 object because the inheritance is private by default
- It's accessible in the Developer class though.
- To make it accessible to class objects we need to make the inheritance public.
- So made the Employee-Developer inheritance public
- Same goes for Teacher class

*/ 