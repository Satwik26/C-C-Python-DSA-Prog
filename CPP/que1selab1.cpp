#include<iostream>
using namespace std;
class parcel_74{
    int weight_74;
    protected:
    int shipping_cost_74;
    public:
    parcel_74(int weight_74){
        this->weight_74=weight_74;
        shipping_cost_74=0;
    }
    void Cal_shipping_74(){
        shipping_cost_74= weight_74 *10;
    }
};
class Box_74:public parcel_74{
    int no_of_boxes_74;
    public:
    Box_74(int weight_74,int no_of_boxes_74=1):parcel_74(weight_74){
        this->no_of_boxes_74 = no_of_boxes_74;
    }
    void Cal_shipping_74(){
        if(no_of_boxes_74>3){
            shipping_cost_74=shipping_cost_74+30;
        }
    }
    void display(){
        cout<<"No of boxes: "<<no_of_boxes_74;
        cout<<"\nShipping Cost: "<<shipping_cost_74;
    }
};
int main(){
    int weight_74;
    cout<<"Enter the weight: ";
    cin>>weight_74;
    if(weight_74<30){
        Box_74 b(weight_74);
        b.parcel_74::Cal_shipping_74();
        b.display();
    }else if(weight_74>=30 && weight_74 < 50){
        Box_74 b(weight_74,3);
        b.parcel_74::Cal_shipping_74();
        b.Cal_shipping_74();
        b.display();
    }else{
        Box_74 b(weight_74,5);
        b.parcel_74::Cal_shipping_74();
        b.Cal_shipping_74();
        b.display();
    }
}