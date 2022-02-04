#include<iostream>
using namespace std;
class shape{
    public:
    int circle_radius;
    int cone_radius;
    int cone_slant_height;
    void input1(int r,int c,int l){
        circle_radius=r;
        cone_radius=c;
        cone_slant_height=l;
    }
};
class area:public shape{
    public:
    void input(){
        cout<<"\nenter the radius of the circle :";
        cin>>circle_radius;
        cout<<"\nenter the radius of the cone  :";
        cin>>cone_radius;
        cout<<"\nenter the slant height of the cone :";
        cin>>cone_slant_height;
    }
    void display(){
        cout<<"\nThe area of the circle :"<<3.14*circle_radius*circle_radius;
        cout<<"\nThe area of the cone :"<<(3.14*cone_radius*cone_radius)+(3.14*cone_slant_height);
    }
};
int main(){
    area a;
    a.input();
    a.display();
    return 0;
}