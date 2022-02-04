#include<iostream>
using namespace std;
class poly2;
class poly1{
    int polyy1[20];
    friend int sum(poly1 py1,poly2 py2);
    public:
        poly1(int deg1){
            cout<<"Enter coeff for 1st polynomial\n";
            for(int i=deg1;i>=0;i--){
                cout<<"Enter Coeff of x^"<<i<<": ";
                cin>>polyy1[i];
            }
        }
}py1;
class poly2{
    int polyy2[20];
    friend int sum(poly1 py1,poly2 py2);
    public:
        poly2(int deg2){
            cout<<"Enter coeff for 2nd polynomial\n";
            for(int i=deg2;i>=0;i--){
                cout<<"Enter Coeff of x^"<<i<<": ";
                cin>>polyy2[i];
            }
        }
}py2;
int sum(poly1 py1,poly2 py2,int deg1,int deg2){
    int larg=(deg1>deg2)?deg2:deg1;
    int temp=(deg1>deg2)?deg2:deg1;
    int sum[larg];
    for(int i=0;i<=larg;i++){
        sum[i]=0;
    }
    printf("\nSum of both the polynomial is: ");
    for(int i=larg;i>=0;i--){
        if(i<=temp){
            sum[i]+=py1.polyy1[i]+py2.polyy2[i];
        }
        if(i>temp){
            if(temp==deg1){
                sum[i]+=py1.polyy2[i];
            }if(temp==deg2){
                sum[i]+=py2.polyy1[i];
            } 
        }
        if(i!=0){
            printf("%dx^%d+",sum[i],i);
        }else{
            printf("%d",sum[i]);         
        }
}
}
int main(){
    int deg1,deg2;
    cout<<"Enter the highest degree for polynomial 1: ";
    cin>>deg1;
    poly1 p1(deg1);
    cout<<"Enter the highest degree for polynomial 2: ";
    cin>>deg2;
    poly2 p2(deg2);
    return 0;
}