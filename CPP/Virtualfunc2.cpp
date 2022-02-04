#include<iostream>
using namespace std;
class Employee{
    protected:
    string name;
    int id;
    float salary;
    public:
    Employee(string name,int id){
        this->name=name;
        this->id=id;
    }
    virtual void TotalSalary(){}
    virtual void display(){}
};
class Regular:public Employee{
    protected:
    float bsalary,da,hra;
    public:
    Regular(string name,int id):Employee(name,id){
        bsalary = 50000;
        da = bsalary*0.1;
        hra = bsalary*0.3;
    }
    void TotalSalary(){
        salary= bsalary + da+hra;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Id: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
class PartTime:public Employee{
    protected:
    int noOfHours;
    float payPerHour;
    public:
    PartTime(string name,int id,int nhrs):Employee(name,id){
        noOfHours=nhrs;
        payPerHour = 500;
    }
    void TotalSalary(){
        salary = noOfHours * payPerHour;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Id: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main(){
    Regular r("Satwik",001);
    PartTime pt("Raju",002,23);
    Employee *emp[2];
    emp[0]=&r;
    emp[1]=&pt;
    emp[0]->TotalSalary();
    emp[0]->display();
    emp[1]->TotalSalary();
    emp[1]->display();
}