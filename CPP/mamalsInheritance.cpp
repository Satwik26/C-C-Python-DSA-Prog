#include<iostream>
using namespace std;
class mammals{
    public:
    void mam(){
        cout<<"I am a mammal"<<endl;
    }
};
class marine_animals{
    public:
    void mar(){
        cout<<"I am a marine animal"<<endl;
    }
};
class bluewhale:public mammals,public marine_animals{
    public:
    void blue(){
        cout<<"Bluewhale: I belong to both the categories: Mammals as well as Marine Animals"<<endl;
    }
    void three(){
        mam();
        mar(); 
        cout<<"Bluewhale: I belong to both the categories: Mammals as well as Marine Animals"<<endl;
    }
};
int main(){
    mammals m;
    marine_animals ma;
    bluewhale b;
    m.mam();
    ma.mar();
    b.blue();
    b.three();
    return 0;
}