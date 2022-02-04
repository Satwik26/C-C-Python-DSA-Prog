#include<iostream>
using namespace std;
class Railgaari{
    protected:
    int no_of_seats_1,no_of_seats_2,no_of_seats_3;
    public:
    void setData(){
        no_of_seats_1=100;
        no_of_seats_2=120;
        no_of_seats_3=150;
    }
    void display(){
        cout<<"Number of seats avail. in 1st class: "<<no_of_seats_1;
        cout<<"\nNumber of seats avail. in 2nd class: "<<no_of_seats_2;
        cout<<"\nNumber of seats avail. in 3rd class: "<<no_of_seats_3;
    }
};
class reseravtion:public Railgaari{
    int no_of_seats_booked_1,no_of_seats_booked_2,no_of_seats_booked_3,no_of_seats_left;
    public:
    reseravtion(){
        setData();
        display();
        int n;
        cout<<"\nPress 1,2 and 3 to book ticket in respective tiers: ";
        cin>>n;
        cout<<"Enter the number of seats: ";
        switch(n){
            case 1: cin>>no_of_seats_booked_1;
            no_of_seats_left=no_of_seats_1-no_of_seats_booked_1;
            cout<<"Number of seats left: "<<no_of_seats_left; 
            break;
            case 2: cin>>no_of_seats_booked_2;
            no_of_seats_left=no_of_seats_2-no_of_seats_booked_2;
            cout<<"Number of seats left: "<<no_of_seats_left;
            break;
            case 3: cin>>no_of_seats_booked_3;
            no_of_seats_left=no_of_seats_3-no_of_seats_booked_3;
            cout<<"Number of seats left: "<<no_of_seats_left;
            break;
        }
        cout<<"\nDHANYAWAD AAPKI YATRA MANGALMAY HO! :)";
    }
    void cancel(){
        int n;
        cout<<"\nEnter the no of seats you want to cancel:  ";
        cin>>n;
        if(n>no_of_seats_booked_1 || n>no_of_seats_booked_2||n>no_of_seats_booked_3){
            cout<<"You don't have enough seats"<<endl;
            cancel();
        }else{
            cout<<"Your ticket has been sucessfully canceled"<<endl;
            cout<<"No of seats left is: "<<no_of_seats_booked_1;
        }     
    }
};
int main(){
    reseravtion r;
    int n;
    cout<<"\nEnter 1 to cancel ticket: ";
    cin>>n;
    if(n==1){
        r.cancel();
    }else{
        exit(0);
    }
    return 0;
}