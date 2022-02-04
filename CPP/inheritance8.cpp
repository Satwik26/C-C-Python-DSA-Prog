#include<iostream>
using namespace std;
class employee{
    protected:
    int empno;
    string name,designation;
    public:
    void getData(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter EMPno: ";
        cin>>empno;
        cout<<"Enter Designation: ";
        cin>>designation;
    }
};
class date{
    int dob,date_hiring;
    public:
    date(){
        cout<<"Enter DOB(DDMMYYYY): ";
        cin>>dob;
        cout<<"Enter date of joining(DDMMYYYY): ";
        cin>>date_hiring;
    }
    void dis(){
        cout<<"Date of birth is(DDMMYYYY): "<<dob;
        cout<<"\nDate of joining(DDMMYYYY): "<<date_hiring;
    }
};
class qualification:public employee{
    protected:
    int ug=50000,pg=150000,experienced=2500000;
    int r;
    public:
    void getQualification(){
        getData();
        cout<<"Enter the qualification 1 for ug 2 for pg  3 for experienced : ";
        cin>>r;
    }
};
class salary:public qualification{
    public:
    salary(){
        getQualification();
        cout<<"Name: "<<name;
        cout<<"\nEmpno: "<<empno;
        cout<<"\nDesignation: "<<designation<<endl;
        if(r==1){
            cout<<"Base Salary: "<<ug;
            cout<<"\nAfter incrementing: "<<ug+(ug*0.1);
            
        }
        if(r==2){
            cout<<"Base Salary: "<<pg;
            cout<<"\nAfter incrementing: "<<pg+(pg*0.2);
        }
        if(r==3){
            cout<<"Base Salary: "<<experienced;
            cout<<"\nAfter incrementing: "<<experienced+(experienced*0.1);
        }
    }
};
int main(){
    salary s;
    date d;
    d.dis();
}