#include<iostream>
using namespace std;
class Account{
    protected:
    int accno;
    string name;
    float balance;
    public:
    Account(string name,int accno){
        this->name=name;
        this->accno=accno;
        balance=0;
    }
    virtual void withdraw()=0;
    virtual void deposit()=0;
    virtual void display(){}
};
class Savings:public Account{
    protected:
    float min_Bal;
    public:
    Savings(string name,int accno,float min_Bal):Account(name,accno){
        this->min_Bal=min_Bal;
    }
    void deposit(){
        float dep;
        cout<<"Enter the ammount to deposit: ";
        cin>>dep;
        min_Bal +=dep; 
        balance= min_Bal;
    }
    void withdraw(){
        float wd;
        cout<<"Enter the ammount to withdraw: ";
        cin>>wd;
        if(min_Bal>=wd){
            min_Bal-=wd;
            balance=min_Bal;
        }else{
            cout<<"Sorry insufficient funds";
        }
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Acc no: "<<accno<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};
class Current:public Account{
    protected:
    float over_Due;
    public:
    Current(string name, int accno):Account(name,accno){
        over_Due = 345.34;
    }
    void deposit(){
        float dep;
        cout<<"Enter ammount to deposit: ";
        cin>>dep;
        balance += dep;
    }
    void withdraw(){
        float wd;
        cout<<"Enter ammount to withdraw: ";
        cin>>wd;
        if(balance-over_Due>=wd){
            balance-=wd;
        }
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Acc no: "<<accno<<endl;
        cout<<"Over due ammount: "<<over_Due<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};
int main(){
    int k;
    cout<<"Enter 1 for saving Account and 2 for Current Account: ";
    cin>>k;
    string name;
    int accno;
    float min_Bal;
    Account *ac;
    if(k==1){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter Acc no: ";
        cin>>accno;
        cout<<"Enter min balance: ";
        cin>>min_Bal;
        Savings s(name,accno,min_Bal);
        ac=&s;
        cout<<"Enter 1 and 2 to deposit and withdraw respectively: ";
        cin>>k;
        if(k==1){
            ac->deposit();
        }else if(k==2){
            ac->withdraw();
        }else{
            cout<<"Wrong choice!";
        }
        ac->display();
    }else if(k==2){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter Acc no: ";
        cin>>accno;
        Current c(name,accno);
        ac=&c;
        cout<<"Enter 1 and 2 to deposit and withdraw respectively: ";
        cin>>k;
        if(k==1){
            ac->deposit();
        }else if(k==2){
            ac->withdraw();
        }else{
            cout<<"Wrong choice!";
        }
        ac->display();
    }else{
        cout<<"Incorrect choice";
    }
}