/*
In Java polymorphism is mainly divided into two types:

1. Compile-time polymorphism: 
It is also known as static polymorphism. 
This type of polymorphism is achieved by function overloading or operator overloading. 
But Java doesn’t support the Operator Overloading.

Method Overloading: When there are multiple functions with same name but different parameters then 
these functions are said to be overloaded. Functions can be overloaded by change in 
number of arguments or/and change in type of arguments.

2. Runtime polymorphism: 
It is also known as Dynamic Method Dispatch. 
It is a process in which a function call to the overridden method is resolved at Runtime. 
This type of polymorphism is achieved by Method Overriding.

Method overriding, on the other hand, occurs when a derived class has a definition for one of the member functions of the base class. 
That base function is said to be overridden.
*/


class Animal {

    public void talk(){
        System.out.println("Animal talks....");
    }

    public void walk(){
        System.out.println("Animal walks 1 step");
    }

    public void walk(int steps){
        System.out.println("Animal walks " + steps + " steps");
    }

    public void walk(String animal, int steps){
        System.out.println(animal + " walks " + steps + " steps");
    }
}

class Lion extends Animal {
    @Override
    public void talk() {
        System.out.println("Lion roars....");
    }
}

class Polymorphism {
    public static void main(String[] args){

        System.out.println("COMPILE TIME POLYMORPHISM");
        Animal a = new Animal();
        // Compile time OR Static polymorphism 
        // Method Overloading
        a.walk();
        a.walk(3);
        a.walk("Cheetah", 10);

        // Runtime polymorphism Or Dynamic Method Dispatch
        // Uses Method Overriding
        System.out.println("\nRUNTIME POLYMORPHISM");
        Lion l = new Lion();
        l.talk();
        // inheriting from parent 
        l.walk("Lion", 5);
    }
}

