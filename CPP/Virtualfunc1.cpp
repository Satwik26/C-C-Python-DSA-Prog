#include<iostream>
using namespace std;
class shape{
    protected:
    float area;
    public:
    shape(){
        area=0;
    }
    virtual void display(){}
    virtual void Area(){}
};
class circle:public shape{
    protected:
    float radius;
    public:
    circle(float r){
        radius=r;
    }
    void Area(){
        area = 3.14 * radius * radius;
    }
    void display(){
        cout<<"Area of the circle is: "<<area<<endl;
    }
};
class square:public shape{
    protected:
    float side;
    public:
    square(float s){
        side=s;
    }
    void Area(){
        area=side*side;
    }
    void display(){
        cout<<"Area of square is: "<<area<<endl;
    }
};
class triangle:public shape{
    protected:
    float height,base;
    public:
    triangle(float h,float b){
        height=h;
        base=b;
    }
    void Area(){
        area=0.5*base*height;
    }
    void display(){
        cout<<"Area of the triangle is: "<<area<<endl;
    }
};
int main(){
    circle c(7);
    square s(6);
    triangle t(5,6);
    shape *sh[3];
    sh[0]=&c;
    sh[1]=&s;
    sh[2]=&t;
    for(int i=0;i<3;i++){
        sh[i]->Area();
        sh[i]->display();
    }
}