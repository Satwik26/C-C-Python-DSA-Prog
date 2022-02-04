#include<iostream>
using namespace std;
class employee{
    protected:
    string name;
    int age;
    float salary;
    public:
    employee(){
        getDetails();
    } 
    void getDetails(){
        cout<<"Enter name of the employee: ";
        cin>>name;
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter salary: ";
        cin>>salary;
    }
    void disp1(){
        cout<<"Name of employee: "<<name;
        cout<<"\nAge: "<<age;
        cout<<"\nSalary: "<<salary<<endl;
    }
};
class manager:public employee{
    protected:
    string namem;
    int agem;
    float salarym;
    public:
    manager():employee(){
        cout<<"Enter Name of Manager: ";
        cin>>namem;
        cout<<"Enter Age: ";
        cin>>agem;
        cout<<"Enter Salary: ";
        cin>>salarym;
    }
    void disp(){
        cout<<"Name of manager: "<<namem<<endl;
        cout<<"Age: "<<agem<<endl;
        cout<<"Salary: "<<salarym<<endl;
        cout<<"Details of employee working under him: "<<endl;
        disp1();
    }
};
int main(){
    manager m;
    m.disp();
    return 0;
}