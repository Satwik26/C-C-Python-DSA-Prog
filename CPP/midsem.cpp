#include<iostream>
using namespace std;
class Batsman{
    protected:
    string name;
    int runs,innings,notOut;
    float avgg;
    public:
    friend void display(Batsman r);
    Batsman(int r,int in,int no,string nm){
        name=nm;
        runs=r;
        innings=in;
        notOut=no;
        avgg=Avg();
    }
    int Avg(){
        int il=innings-notOut;
        float avg= runs/innings;
        return avg;
    }
    Batsman(){
        for(int i=0;i<2;i++){
            cout<<"Name: "<<name;
            cout<<"\tRuns: "<<runs;
            cout<<"\tInnings: "<<innings;
            cout<<"\tNot out: "<<notOut;
            cout<<"\tAverage is: "<<Avg();
        }
    }
};
int main(){
    int r[2],in[2],no[2];
    string nm[2];
    for(int i=0;i<2;i++){
        cout<<"Enter Name: ";
        cin>>nm[i];
        cout<<"Enter runs: ";
        cin>>r[i];
        cout<<"Enter innings: ";
        cin>>in[i];
        cout<<"Enter Not out: ";
        cin>>no[i];
        Batsman b(r[i],in[i],no[i],nm[i]);
    }
    Batsman r1;
}