/*
Encapsulation is binding of data(attributes) & methods associated with each other to avoid 
external classess alter the data and also to add validation while setting the data

1. declare data to be private
2. use getters and setters as interface between data & other classes


Note: 
a. if data is private its only accessible within the class
b. if data is protected its accessible within the class & all the classess inhereiting that class 
c. if data is public its accessible everywhere
d.

*/

class Employee {
    private String name;
    private int age;
    private int experience;

    Employee(String name, int age, int experience) {
        this.name = name;
        this.age = age;
        this.experience = experience;
    }

    // GETTERS
    public String getName() {
        return name;
    }
    public int getAge() {
        return age;
    }
    public int getExperience() {
        return experience;
    }

    // SETTERS
    public void setName(String name){
        this.name = name;
    }
    public void setAge(int age){
        this.age = age;
    }
    public void setExperience(int experience){
        this.experience = experience;
    }

    public void introduce(){
        System.out.println("My name is " + name + ". I am " + age + " years old and I have " + experience + " years of experience");
    }

    public void askForPromotion(){
        System.out.println("Can I get a promotion ?");
        if(experience > 2){
            System.out.println("Congratulations! You are promoted!\n");
        } else {
            System.out.println("Sorry, more experience required!\n");
        }
    }
}

class Encapsulation {
    public static void main(String[] args){
        Employee e1 = new Employee("John", 25, 2);
        e1.introduce();
        e1.askForPromotion();

        Employee e2 = new Employee("Jack", 26, 3);
        e2.introduce();
        e2.askForPromotion();
    }
}