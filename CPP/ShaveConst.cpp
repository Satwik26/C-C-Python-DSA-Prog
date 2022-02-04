#include<iostream>
using namespace std;
class shape{
    protected:
    float areac=0,areat=0,arear=0;
};
class circle:public shape{
    protected:
        float radius;
    public:
        circle(){
            cout<<"Enter radius: ";
            cin>>radius;
            areac= 3.14*radius*radius;
            cout<<"Area of circle: "<<areac;
        }
};
class triangle:public shape{
    protected:
        float base,height;
    public:
        triangle(){
            cout<<"\nEnter Base and Height: ";
            cin>>base>>height;
            areat=0.5*base*height;
            cout<<"Area of trinange: "<<areat;
        }
};
class rectangle:public shape{
    protected:
        float length,breadth;
    public:
        rectangle(){
            cout<<"\nEnter length and breadth: ";
            cin>>length>>breadth;
            arear=0.5*length*breadth;
            cout<<"Area of trinange: "<<arear;
        }
};
int main(){
    circle c;
    triangle t;
    rectangle r;
}