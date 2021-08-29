/*

Topics covered:

1. Constructor:
    i) Default constructor
    ii) Parameterized constructor
2. static variable
3. this keyword : 
    i) to call other constructors of the same class (Constructor chaining)
    ii) to refer current class instance variable

*/ 


public class Constructor {
    public static void main(String[] args) {

        // John object is created using default construtor
        Person p1 = new Person();
        p1.name = "John";
        p1.age = 20;
        p1.introduce();
        System.out.println(p1.name + "'s id : " + Person.count + '\n');

        // Jane object is created using parameterized construtor
        Person p2 = new Person("Jane", 18);
        p2.introduce();
        System.out.println(p2.name + "'s id : " + Person.count + '\n');

    }
}

class Person {
    String name;
    int age;

    // Static variable are global variables, when a static variable is declared, a single copy
    // of the variable is created and shared among all the objects at the class level.
    // They can be created at class-level only.
    static int count=0;

    // Default constructor
    Person() {
        count++;
        System.out.println("Creating an object...");
    }

    // Parameterized constructor
    Person(String name, int age){
        // Calls default constructor of the current class.
        // this must be the first line of the constructor from where we want to call another constructor
        this();
        // to refer current class instance variable
        this.name = name;
        this.age = age;
    }

    void introduce() {
        System.out.println("My name is " + name);
        System.out.println("I'm " + age + " years old");
    }
}

/*
If the constructor were not chained using this() default constructor wouldn't be invoked 
for Jane and count would remain 1. So Jane's id would have been 1
*/