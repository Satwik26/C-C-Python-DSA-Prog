package assignment5;
import java.util.Scanner;
class shape{
    double ar;
    void area(){
        System.out.println("Area is: "+ar);
    }
}
class rectangle extends shape{
    void area(int l,int b){
        ar = l*b;
    }
}
class triangle extends shape {
    void area(int l,int h){
        ar=0.5*l*h;
    }
}
class q3 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the 1st dimension: ");
        int a = in.nextInt();
        System.out.print("Enter the 2nd dimension: ");
        int b = in.nextInt();
        triangle t = new triangle();
        t.area(a, b);
        t.area();
        System.out.print("Enter the 1st dimension: ");
        int c = in.nextInt();
        System.out.print("Enter the 2nd dimension: ");
        int d = in.nextInt();
        rectangle r = new rectangle();
        r.area(c,d);
        r.area();
    }
}