public class Inheritance {
    public static void main(String[] args) {
        Developer d1 = new Developer("Jack", 22, "Java");
        d1.introduce();
        d1.fixBug();

        Developer d2 = new Developer("Alex", 25, "C++");
        d2.introduce();
        d2.fixBug();
    }
}

class Person {

    String name;
    int age;

    Person (String name, int age) {
        this.name = name;
        this.age = age;
    }

    void introduce() {
        System.out.println("My name is " + name);
        System.out.println("I'm " + age + " years old");
    }
}

class Developer extends Person {
    String programmingLanguage;
    Developer(String name, int age, String programmingLanguage){
        // to invoke immediate parent class constructor
        super(name,age);
        this.programmingLanguage = programmingLanguage;
    }
    void introduce() {
        // to invoke parent class method
        super.introduce();
        System.out.println("I'm a " + programmingLanguage + " developer");
    }

    void fixBug(){
        System.out.println("Fixed bug using " + programmingLanguage + '\n');
    }
}