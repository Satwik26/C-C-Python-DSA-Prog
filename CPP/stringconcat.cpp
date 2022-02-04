#include<iostream>
using namespace std;
class String{
    string *str;
    int *len;
    public:
    String(string *ptr,int ln){
        str= new string;
        str = ptr;
        len = new int;
        *len = ln;
        cout<<"Length of the string is: "<<*len<<endl;
    }
    string add(string &ptr1,string &ptr2){
        string con;
        con = ptr1+ptr2;
        cout<<con;
        int ln= con.length();
        cout<<"\nTotal Length is: "<<ln;
    }
    ~String(){
        delete str;
        delete len;
    }
};
int main(){
    string st1,*ptr1,*ptr2,st3;
    int ln1,ln2;
    ptr1=&st1;
    cout<<"Enter the 1st String: ";
    cin>>st1;
    ln1= st1.length();
    String s1(ptr1,ln1);
    cout<<"Enter the 2nd String: ";
    ptr2=&st3;
    cin>>st3;
    ln2 = st3.length();
    String s2(ptr2,ln2);
    s2.add(*ptr1,*ptr2);
    return 0;
}