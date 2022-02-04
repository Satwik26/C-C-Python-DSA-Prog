#include<iostream>  
#include<cstring>  
using namespace std;
class String  {  
    char *str;
    public:
    String(){
        str = new char[100]; 
    }  
    void input(){
        cout<<"Enter you String: ";
        cin>>str;
    }
    void display(){  
        cout<<"String: "<<str;  
    }  
    String operator+(String s){  
        String obj;  
        strcat(str,s.str);  
        strcpy(obj.str,str);  
        return obj;  
    }  
};  
int main(){  
    String str1,str2,str3;
    str1.input();  
    str2.input();  
    str3=str1+str2;  
    str3.display();  
}