/*
- Abstraction is achieved through
1. Abstract class (0-100%)
2. Interface (100% abstraction)

- It is declared using an abstract keyword

- Abstract class can have
1. abstract and non-abstract methods.
2. constructrors and static methods 
3. final methods which will force the subclass not to change the body of the method.

- It cannot be instantiated
*/

abstract class Shape {
    private String color;

    abstract double calculateArea();
    abstract String displayArea();
 
    Shape(String color){
        this.color = color;
    }

    public String getColor() {
        return color;
    }
}

class Circle extends Shape {
    double radius;

    Circle(String color, double radius){
        super(color);
        this.radius = radius;
    }

    @Override
    public double calculateArea(){
        return Math.PI * Math.pow(radius,2);
    }

    public String displayArea(){
        return "Circle color is " + super.getColor() + " and area is " + calculateArea();
    }
}

class Reactangle extends Shape {
    double length;
    double breadth;

    Reactangle(String color, double length, double breadth){
        super(color);
        this.length = length;
        this.breadth = breadth;
    }

    public double calculateArea(){
        return length*breadth;
    }

    public String displayArea(){
        return "Rectangle color is " + super.getColor() + " and area is " + calculateArea();
    }
}



public class Abstraction {
    public static void main(String[] args){
        Shape s1 = new Circle("green", 3.1);
        Shape s2 = new Reactangle("blue", 7.7, 4.4);

        System.out.println(s1.displayArea());
        System.out.println(s2.displayArea());
    }
}