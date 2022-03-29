import java.util.*;
class Rect extends Shape {
    int l, b;
    Rect(int x, int y) {
        super();
        l = x;
        b = y;
    }
    public void showArea() {
        area = l * b;
        System.out.println("Area of rectangle: " + area);
    }
}
abstract class Shape {
    double area;

    abstract public void showArea();
}
class Circle extends Shape {
    int r;

    Circle(int x) {
        super();
        r = x;
    }

    public void showArea() {
        area = Math.PI * r * r;
        System.out.println("Area of circle: " + area);
    }

}
class result{
    public static void main(String args[]) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter length and breadth: ");
        int l= sc.nextInt();
        int b = sc.nextInt();
        System.out.print("Enter radius: ");
        int r= sc.nextInt();
        Rect ob = new Rect(l, b);
        ob.showArea();
        Circle o = new Circle(r);
        o.showArea();
    }
}