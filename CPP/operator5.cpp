#include<iostream>
using namespace std;
class time{
    int h,m,s;
    public:
    time(){
        h=0;
        m=0;
        s=0;
    }
    time(int a,int b,int c){
        h=a;
        m=b;
        s=c;
    }
    friend bool operator==(time &ob1,time &ob2); 
};
bool operator==(time &ob1,time &ob2){
    return (ob1.h==ob2.h && ob1.m==ob2.m && ob1.s==ob2.s);
}
int main(){
    time ob1(2,3,4);
    time ob2(3,4,5);
    if(ob1==ob2){
        cout<<"equal";
    }
    else{
        cout<<"not equal";
    }
}