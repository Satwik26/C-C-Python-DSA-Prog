#include<iostream>
using namespace std;
class Distance{
    public:
    int feet,inch;
    Distance(int f,int i){
        feet=f;
        inch=i;
    }
    void displayDistance() {
         cout << feet <<"ft "<< inch <<"in" <<endl;
    }
    bool operator>(Distance &d1){
        if(feet>d1.feet){
            return true;
        }
        return false;
    }
    bool operator==(Distance &d1){
        if(feet==d1.feet&&inch==d1.inch){
            return true;
        }
        return false;
    }
};
int main(){
    int f,i;
    cout<<"Enter feet and inches(inch<12): ";
    cin>>f>>i;
    Distance d1(f,i);
    cout<<"Enter feet and inches(inch<12): ";
    cin>>f>>i;
    Distance d2(f,i);
    d1.displayDistance();
    d2.displayDistance();
    if(d1>d2){
        cout<<"Larger dist: ";
        d1.displayDistance();
    }else{
        cout<<"Larger dist: ";
        d2.displayDistance();
    }
    if(d1==d2){
        cout<<"Equal";
    }else{
        cout<<"Not Equal";
    }
}