#include<iostream>
using namespace std;
class complex{
    private:
    int* real,*img;
    float r,i;
    public:
    complex(int,int);
    complex();
    void disp(){
        cout<<"Your Number is "<<*real<<" + "<<*img<<"i"<<endl;
    }
    complex(float j,float k){//parameterized constructor
        r=j;
        i=k;
        cout<<"Your Parameterized complex number is: "<<r<<" + "<<i<<"i"<<endl;
    }
    complex(complex &c){//copy constructor
        real=c.real;
        img = c.img;
    }
    ~complex(){//destructor
        cout<<"Destructor invoked\n";
        delete real;
        delete img;
    }
};
complex::complex(int x,int y){//dynamic constructor
    real=new int;
    *real=x;
    img=new int;
    *img=y;
}
complex::complex(void){//Default Constructor
    real = new int;
    *real=8;
    img=new int;
    *img = 9;
}
int main(){
    int a,b;
    float r,s;
    cout<<"Enter the real part of Complex number: ";
    cin>>a;
    cout<<"Enter the imaginary part of Complex number: ";
    cin>>b;
    complex c1(a,b);
    complex c2;
    cout<<"Dynamic Complex Number: \n";
    c1.disp();
    cout<<"Default Complex Number: \n";
    c2.disp();
    cout<<"Enter the real part of Complex number: ";
    cin>>r;
    cout<<"Enter the imaginary part of Complex number: ";
    cin>>s;
    complex c3(r,s);
    return 0;
}