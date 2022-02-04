#include<iostream>
using namespace std;
class Time{
    private:
    int *hour,*minute;
    public:
    Time(int,int);//constructor
    Time();
    void disp(){
        cout<<"Time is "<<*hour<<":"<<*minute;
    }
}c2;
Time::Time(int x=0,int y=0){
    hour = new int;
    *hour=x;
    minute=new int;
    *minute=y;
}
Time::Time(){
    hour = new int;
    *hour=8;
    minute=new int;
    *minute=12;
}
int main(){
    int a,b,n;
    cout<<"press 1 to enter time and 2 to continue: ";
    cin>>n;
    if(n==1){
        cout<<"Enter the time in hour: ";
        cin>>a;
        cout<<"Enter min: ";
        cin>>b;
        Time c1(a,b);
        c1.disp();
    }else{
        Time c3(0,0);
        c3.disp();
    }
    cout<<"\nDefault time: \n";
    c2.disp();
    return 0;
}