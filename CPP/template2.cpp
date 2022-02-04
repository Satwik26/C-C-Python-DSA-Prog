#include<iostream>
using namespace std;
template <class T, class U>
void show(T x,U y){
    cout<<x<<" "<<y;
}
int main(){
    show<int,char>(2,'c');
}