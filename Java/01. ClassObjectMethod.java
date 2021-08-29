public class ClassObjectMethod {
    public static void main(String[] args) {

        Person p1 = new Person();
        p1.name = "John Doe";
        p1.age = 20;

        p1.introduce();
        p1.walk();
    }
}

class Person {
    // Data or attributes or properties
    String name;
    int age;

    // Actions or behaviours or methods
    void introduce() {
        System.out.println("My name is " + name);
        System.out.println("I'm " + age + " years old");
    }
    void walk(){
        System.out.println(name + " is walking");
    }
}