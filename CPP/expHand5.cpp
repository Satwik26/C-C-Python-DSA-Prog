#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char name[20];
    int i;
    cout<<"enter the string :\n";
    cin.getline(name,20);
    try{
        for(i=0;i<20;i++)
            if(name[i]==' ') 
                throw name[i];
        }
    catch(char e){
        cout<<"space detected ";
    }
    
}