#include<iostream>
using namespace std;
class Account{
    protected:
    string name;
    float balance;
    int accno;
    public:
    Account(string s,int acc){
        name=s;
        accno=acc;
    }
    void disp(){
        cout<<"Name: "<<name;
        cout<<"\nAccno: "<<accno;
    }
};
class Savings:public Account{
    protected:
    float min_bal=1000;
    public:
    Savings(string s,int acc):Account(s,acc){
        float money;
        cout<<"Your current balance is: "<<min_bal;
        cout<<"\nEnter amount you want to deposit: ";
        cin>>money;
        min_bal+=money;
        cout<<"Your available balance is: "<<min_bal;
    }
    void withdraw(){
        float money;
        cout<<"Enter the amount you want to withdraw: ";
        cin>>money;
        if(money>min_bal-1000){
            cout<<"Sorry insufficient funds";
            exit(0);
        }else{
            min_bal-=money;
        }
        cout<<"Your available balance is: "<<min_bal;
    }
};
class current:public Account{
    protected:
    float overdue=-5789.45;
    public:
    current(string s,int acc):Account(s,acc){
        float money;
        cout<<"Your current Account balance is: "<<overdue;
        cout<<"\nEnter amount you want to deposit: ";
        cin>>money;
        overdue+=money;
        cout<<"Your available balance is: "<<overdue;
    }
    void withdraw(){
        float money;
        cout<<"Enter money to withdraw: ";
        cin>>money;
        if(money>overdue){
            cout<<"Insufficient Funds";
            exit(0);
        }else{
            overdue-=money;
            cout<<"Remaining balance is: "<<overdue;
        }
    }
};
int main(){
    int k,acc;
    string s;
    cout<<"Enter Name: ";
    cin>>s;
    cout<<"Enter Account no: ";
    cin>>acc;
    cout<<"Enter 1 for Savings Account and 2 for current Account: ";
    cin>>k;
    if(k==1){
        Savings s1(s,acc);
        int n;
        cout<<"\nEnter 1 to withdraw anything else to exit: ";
        cin>>n;
        if(n==1){
            s1.withdraw();
        }else{
            exit(0);
        }
    }
    if(k==2){
        current c(s,acc);
        int n;
        cout<<"\nEnter 1 to withdraw anything else to exit: ";
        cin>>n;
        if(n==1){
            c.withdraw();
        }else{
            exit(0);
        }
    }
}