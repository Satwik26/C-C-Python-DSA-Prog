import java.util.Scanner;

class a2D{
void test (){

Scanner in = new Scanner(System.in);
System.out.println("ENTER SQUARE FT=");
            double side = in.nextDouble();
            double sa = side * 40;
            System.out.println("PRICE = " + sa);
}
}
class a3D extends a2D
{
void test (){
    Scanner in = new Scanner(System.in);
    System.out.println("ENTER CUBIC FT=");
                double side = in.nextDouble();
                double sa = side * 60;
                System.out.println("PRICE = " + sa);
}
}
class manufacturer {
    public static void main (String args [])
{
a2D a2d;
a2d= new a2D ();
a2d.test () ;
a2d= new a3D() ;
a2d.test ();
}
}