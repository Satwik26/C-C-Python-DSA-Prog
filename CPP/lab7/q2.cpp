#include <iostream>
using namespace std;
class Base1{  
    public:   
    Base1(){
        cout << "Inside first base class" << endl;
    }
    ~Base1(){
        cout<<"Destructor of base class 1 is invoked"<<endl;
    }
};
class Derived1:public Base1{
    public:
    Derived1(){
        cout << "Inside 1st derived class" << endl;
    }
    ~Derived1(){
        cout<<"Destructor of Derived class 2 is invoked"<<endl;
    }
};
class Derived2 : public Derived1{
    public:
    Derived2(){
        cout << "Inside 2nd Derived class" << endl;
    }
    ~Derived2(){
        cout<<"Destructor of derived class is invoked"<<endl;
    }
};
int main() {
    Derived2 obj1;
    return 0;
}