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
class Base2{
    public:
    Base2(){
        cout << "Inside second base class" << endl;
    }
    ~Base2(){
        cout<<"Destructor of base class 2 is invoked"<<endl;
    }
};
class Derived : public Base1, public Base2{
    public:
    Derived(){
        cout << "Inside Derived class" << endl;
    }
    ~Derived(){
        cout<<"Destructor of derived class is invoked"<<endl;
    }
};
int main() {
    Derived obj1;
    return 0;
}