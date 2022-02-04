#include<iostream>
using namespace std;
class A{
    int a[10];
    public:
    friend istream& operator>>(istream &in,A &ob);
    friend ostream& operator<<(ostream &out,A &ob);
};
istream & operator>>(istream &in,A &ob){
    for(int i=0;i<10;i++){
        in>>ob.a[i];
    }
    return in;
}
ostream & operator<<(ostream &out,A &ob){
    for(int i=0;i<10;i++){
        out<<ob.a[i]<<" ";
    }
    return out;
}
int main(){
    A obj;
    cin>>obj;
    cout<<obj;
}