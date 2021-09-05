#include<iostream>
#include<cmath>
using namespace std;
class s2;
class s1{
    int a, b;
    friend int sum(s1 o1,s2 o2);
    public:
        s1(int x,int y){
            a=x;
            b=y;
        }
        void print(){
            cout<<"("<<a<<","<<b<<")";
        }
};
class s2{
    int a,b;
    friend int sum(s1 o1,s2 o2);
    public:
        s2(int x,int y){
            a=x;
            b=y;
        }
        void print(){
            cout<<"("<<a<<","<<b<<")";
        }
};
int sum(s1 o1,s2 o2){
    float dist = hypot((o1.a-o2.a),(o1.b-o2.b)); // sqrt(x^2+y^2)
    cout<<"\nDistance beteen both the point is: "<<dist;
}
int main(){
    int x, y;
    cout<<"Enter the x-cordinate: ";
    cin>>x;
    cout<<"Enter y-coordinate: ";
    cin>>y;
    s1 o1(x,y);
    o1.print();
    cout<<"\nEnter the x-coordinate: ";
    cin>>x;
    cout<<"Enter the y-coordinate: ";
    cin>>y;
    s2 o2(x,y);
    o2.print();
    sum(o1,o2);
}