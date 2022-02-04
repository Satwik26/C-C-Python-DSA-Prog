#include <iostream> 
#include<cmath>
using namespace std;
template <class t>
t reverse(t n){
    t reverse=0, rem;
    while(n!=0){    
        rem=n%10;      
        reverse=reverse*10+rem;    
        n/=10;    
    }
    return reverse;
}
int main(){ 
    int n;
    cout<<"Enter a number: ";    
    cin>>n;    
    cout<<"Reversed Number: "<<reverse(n)<<endl;
}  