import java.util.Scanner;
class para {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the side of cube: ");
        int side = sc.nextInt();
        Shape3D obj = new Shape3D(side);
    }
}
class Shape2D {
    int lenght;
    Shape2D() {
        lenght = 0;       
    }
    Shape2D(int l) {
        lenght = l;   
        System.out.println("Area of square = " + (l * l));
    }
}
class Shape3D extends Shape2D {
    int s;
    Shape3D() {
        s = 0;
    }
    Shape3D(int side) {
        super(4);
        s = side;
        System.out.println("volume of cube = " + (side * side * side));
    }
}