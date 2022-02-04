#include<iostream>
using namespace std;
class Item{
    private:
    int id;
    float price;
    public:
    void getData(int a,float b){
        id=a;
        price=b;
    }
    void show(){
        cout<<id<<endl<<price;
    }
};
int main(){
    int n;
    cout<<"Enter the number of data: ";
    cin>>n;
    int x , y;
    Item *ptr=new Item[n];
    for(int i =0;i<n;i++){
        cout<<"Enter id and price: ";
        cin>>x>>y;
        ptr[i].getData(x,y);
    }
}