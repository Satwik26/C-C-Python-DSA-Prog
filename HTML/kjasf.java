import java.io.*;
import java.util.*;

class overloadArea{
    void area(float x){
        System.out.println("the area of the square is "+Math.pow(x, 2)+" sq units");
    }
    void area(float x, float y)
    {
        System.out.println("the area of the rectangle is "+x*y+" sq units");
    }
    void area(double x)
    {
        double z = 3.14 * x * x;
        System.out.println("the area of the circle is "+z+" sq units");
    }
}
class Overload 
{
     public static void main(String args[]) 
	{
       Scanner scanner = new Scanner(System.in);
	   overloadArea ob = new overloadArea();
       System.out.println("Enter Your choice\n1.Square\n2.Rectangle\n3.Circle");
       int ch=scanner.nextInt();
       
       switch (ch) {
           case 1:int a=scanner.nextInt();
                  ob.area(a);
                  break;
           case 2:int b=scanner.nextInt();
                  int h=scanner.nextInt();
                  ob.area(b,h);
                  break;
           case 3:int r=scanner.nextInt();
                  ob.area(r);
                  break;
        default:System.out.println("Invalid choice.");
       }

    }
}