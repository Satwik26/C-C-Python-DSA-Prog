package assignment5;
import java.util.Scanner;
class plate {
    int a;
    void input(){
        Scanner inp = new Scanner(System.in);
        System.out.print("Enter the length: ");
        int length = inp.nextInt();
        System.out.print("Enter the breadth: ");
        int breadth = inp.nextInt();
        a = length*breadth;
        System.out.println("the area is: "+a);
    }
}
class box extends plate {
    int b;
    void takeinput(){
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the height: ");
        int height = in .nextInt();
        b= a*height;
        System.out.println("the volume is: "+b);
    }
}
class woodbox extends box {
    void getinput(){
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the thickness: ");
        int thickness = in .nextInt();
        int c = b*thickness;
        System.out.println("the final ans is :"+c);
    }

    

}
class main {
    public static void main(String args[]){
        woodbox w = new woodbox();
        w.input();
        w.takeinput();
        w.getinput();
    }
    
}
