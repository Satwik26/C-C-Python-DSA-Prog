#include<iostream>
using namespace std;
class A{
    protected:
    int n;
    public:
    A(int n){
        this->n=n;
    }
    virtual void display()=0;
};
class p:public A{
    public:
    p(int n):A(n){}
    void display(){
         for(int i=0;i<=n;i++){
            for(int j=0;j<i;j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    A *a;
    int n;
    cout<<"Enter row: ";
    cin>>n;
    p P(n);
    a=&P;
    a->display();
}