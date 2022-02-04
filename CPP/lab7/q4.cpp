#include <iostream>
using namespace std;
class Sports{ 
    protected:
    float marks; 
    public:   
    Sports(int m){
        marks =m;
    }
};
class Test{
    protected:
    float mark;
    public:
    Test(int n){
        mark = n;
    }
};
class result:public Sports, public Test{
    protected:
    float res;
    float per;
    public:
    result(int m,int n):Sports(m),Test(n){
        res= m+n;
        per= res/2;
    }
    void print(){
        cout<<"Total Marks: "<<res<<endl;
        cout<<"Percentage: "<<per;
    }
};
int main() {
    int m,n;
    cout<<"Enter the marks for sports: ";
    cin>>m;
    cout<<"Enter the marks in test: ";
    cin>>n;
    result r(m,n);
    r.print();
    return 0;
}