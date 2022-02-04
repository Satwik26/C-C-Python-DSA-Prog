#include<iostream>
using namespace std;
class distance{
    protected:
    int kms,ms;
    public:
    distance(){
        cout<<"Enter distance in Km and meter ";
        cin>>kms>>ms;
    }
};
class school:public distance{
    private:
    int timec=(kms*1000+ms)/90,timew=(kms*1000+ms)/29,timecar=(kms*1000+ms)/162;
    public:
    school():distance(){
        cout<<"Distance between school nad house is "<<kms<<" km "<<ms<<" m";
        cout<<"\nIf using Cycle time required: "<<timec<<"mins";
        cout<<"\nIf Walking time required: "<<timew<<"mins";
        cout<<"\nIf using Car time required: "<<timecar<<"mins";
    }
};
class office:public distance{
    private:
    int timec=(kms*1000+ms)/90,timew=(kms*1000+ms)/29,timecar=(kms*1000+ms)/162;
    public:
    office():distance(){
        cout<<"Distance between school nad house is "<<kms<<" km "<<ms<<" m";
        cout<<"\nIf using Cycle time required: "<<timec<<"mins";
        cout<<"\nIf Walking time required: "<<timew<<"mins";
        cout<<"\nIf using Car time required: "<<timecar<<"mins";
    }
};
int main(){
    int n;
    cout<<"Enter 1 to enter distance between house and school nad 2 to enter distance between house and office: ";
    cin>>n;
    if(n==1){
        school s;
    }
    else if(n==2){
        office o;
    }
    else{
        cout<<"\nError 404 input not found";
        exit(0);
    }
    return 0;
}