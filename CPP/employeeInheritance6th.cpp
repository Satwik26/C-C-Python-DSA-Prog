#include<iostream>
using namespace std;
class employee{
    protected:
    string name;
    int id;
    public:
    void getData(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter id: ";
        cin>>id;
    }
    void disp(){
        cout<<"Name: "<<name;
        cout<<"\nID: "<<id;
    }
};
class regular:public employee{
    protected:
    float da,hra,basic_salary,final_salary;
    public:
    void getData1(){
        getData();
        cout<<"Enter salary: ";
        cin>>basic_salary;
        da=0.1*basic_salary;
        hra=0.15*basic_salary;
        final_salary=basic_salary+da+hra;
    }
    void disp1(){
        disp();
        cout<<"\nYour basic salary is: "<<basic_salary;
        cout<<"\nYour da is: "<<da;
        cout<<"\nYour hra is: "<<hra;
        cout<<"\nYour final salary is: "<<final_salary;
    }
};
class partTime:public employee{
    protected:
    int no_of_hours,pay_hr,final_pay;
    public:
    void getData2(){
        getData();
        pay_hr=1500;
        cout<<"Enter number of hours: ";
        cin>>no_of_hours;
        final_pay=no_of_hours*pay_hr;
    }
    void disp2(){
        disp();
        cout<<"\nYour number of hours is: "<<no_of_hours;
        cout<<"\nYour final pay is: "<<final_pay;
    }
};
int main(){
    int n;
    cout<<"Enter 1 to continue as an regular employee, 2 to continue as part-time employee: ";
    cin>>n;
    regular r;
    partTime p;
    if(n==1){
        r.getData1();
        r.disp1();
    }
    else if(n==2){
        p.getData2();
        p.disp2();
    }else{
        cout<<"Wrong input!";
        exit(0);
    }
}