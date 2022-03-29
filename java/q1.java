import java.util.Scanner;
class rectangle {
    int length,breadth;
    rectangle(int length,int breadth){
        this.length= length;
        this.breadth= breadth;
    }
    void input(){
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the value of length :");
        length = in.nextInt();
        System.out.print("Enter the value of breadth :");
        breadth = in.nextInt();
    }
    void area(){
        int ar=length*breadth;
        System.out.println("THe area is: " + ar);
    }
    void peri(){
        int pr=2*(length+breadth);
        System.out.println("The perimter is: " + pr);
    }
}
class findarea{
    public static void main(String arg[]){
        rectangle rec = new rectangle(1,1);
        rec.input();
        rec.area();
        rec.peri();
    }
}