package assignment5;
import java.util.Scanner;
class shape{
    double ar=0;
    int l,b,h;
    void area(){
        
    }
}
class rectangle extends shape{
    rectangle(int l,int b){
        this.l = l;
        this.b =b;
    }
    void area(){
        ar = l*b;
        System.out.print("Area of rextangle is: "+ ar);
    }
}
class triangle extends shape{
    triangle(int b,int h){
        this.b=b;
        this.h=h;
    }
    void area(){
        ar = 0.5*b*h;
        System.out.print("Area of triangle is: "+ar);
    }
}
class q4{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter length: ");
        int l =sc.nextInt();
        System.out.print("Enter Breadth: ");
        int b = sc.nextInt();
        rectangle s = new rectangle(l, b);
        s.area();
        System.out.print("Enter Base: ");
        b =sc.nextInt();
        System.out.print("Enter Height: ");
        int h = sc.nextInt();
        shape s1 = new triangle(b, h);
        s1.area();
    }

}