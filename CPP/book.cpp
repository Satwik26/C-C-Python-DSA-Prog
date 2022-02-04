#include<iostream>
using namespace std;
class Person{
    protected:
    string name[5]={"Mike Trout","Bryce Harper","Manny Machado","Clayton Kershaw","Francisco Lindor"};
    int age[5]={30,28,29,33,27};
};
class baseball_player:public Person{
    public:
    baseball_player(){
        for(int i=0;i<5;i++){
            cout<<"Name: "<<name[i]<<"\tAge: "<<age[i]<<endl;
        }
    }
};
int main(){
    baseball_player b;
}