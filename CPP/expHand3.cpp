#include<iostream>
using namespace std;
void test(int x){
    try{
        if(x==0){
            throw x;
        }
        else if(x==-1){
            throw'x';
        }
        else if(x==1){
            throw 1;
        }
    }
    catch(int x){
        cout<<"caught an integer\n"<<endl;
    }
    catch(double y){
        cout<<"caught an float\n"<<endl;
    }
    catch(char z){
        cout<<"caught an character\n"<<endl;
    }
}
int main(){
    test(0);
    test(-1);
    test(1);
}