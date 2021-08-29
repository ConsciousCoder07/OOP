/*
The Java compiler adds public and abstract keywords before the interface method. 
Moreover, it adds public, static and final keywords before data members.

1. It is used to achieve abstraction (hiding implementation details)
2. It can be used to support functionality of multiple inheritance
3. It can be used to achieve loose coupling
*/


interface Vehicle {
    void changeGear(int a);
    void accelerate(int a);
    void decelerate(int a);
}

class Bicycle implements Vehicle {
    int speed;
    int gear;

    Bicycle(int speed, int gear) {
        this.speed = speed;
        this.gear = gear;
    }

    @Override
    public void changeGear(int newGear){
        gear = newGear;
    }

    @Override
    public void accelerate(int increment){
        speed += increment;
    }

    @Override
    public void decelerate(int decrement){
        speed -= decrement;
    }

    public void displayInfo() {
        System.out.println("For Bicycle:- \nSpeed: " + speed + " Gear: " + gear);
    }
}

class Bike implements Vehicle {
    int speed;
    int gear;

    Bike(int speed, int gear) {
        this.speed = speed;
        this.gear = gear;
    }

    @Override
    public void changeGear(int newGear){
        gear = newGear;
    }

    @Override
    public void accelerate(int increment){
        speed += increment;
    }

    @Override
    public void decelerate(int decrement){
        speed -= decrement;
    }

    public void displayInfo() {
        System.out.println("For Bike:- \nSpeed: " + speed + " Gear: " + gear);
    }
}

class Interface {
    public static void main(String[] args){
        Bicycle bicyle1 = new Bicycle(20, 2);
        Bike bike1 = new Bike(40, 3);
        bicyle1.displayInfo();
        bike1.displayInfo();

        System.out.println("\nAfter changing speed and gear - \n");

        bicyle1.decelerate(10);
        bicyle1.changeGear(1);
        bicyle1.displayInfo();

        bike1.accelerate(30);
        bike1.changeGear(4);
        bike1.displayInfo();
    }
}