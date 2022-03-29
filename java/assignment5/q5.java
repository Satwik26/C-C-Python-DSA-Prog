package assignment5;
class X {
    public X(){
        System.out.println("Hello");
    }
    public X(int i, int j){
        System.out.println("World");
    }
}
class Y extends X {
    public Y(){
        super(10, 20);
        System.out.println("I am legen wait for it");
    }
    public Y(int i, int j){
        System.out.println("dary");
    }
}
public class q5{
    public static void main(String[] args){
        Y obj = new Y(); new Y(9,11);
        
    }
}