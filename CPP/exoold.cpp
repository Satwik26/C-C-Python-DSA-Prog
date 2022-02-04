#include<iostream>
#include<conio.h>
using namespace std;
class complex {
    int a, b, c;
public:
    complex(int a,int b){
        this->a=a;
        this->b=b;
    }
    void operator--() {
        try{
            if(a==0 && b==0){
               throw "Error: ";
            }else{
                a = --a;
                b = --b;
            }
        }
        catch(...){
            cout<<"No 0 input allowed ";
        }
    }
    void display() {
        cout << a << "+" << b << "i" << endl;
    }
};
int main(){
    int a,b;
    cout<<"Enter real and imaginary part of complex number: ";
    cin>>a>>b;
    complex obj(a,b);
    obj.display();
    --obj;
    cout << "Decrement Complex Number\n";
    obj.display();
}