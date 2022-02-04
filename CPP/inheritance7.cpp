#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rollno;
    void input(){
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Rollno: ";
        cin>>rollno;
    }
};
class result:public student{
    public:
    int marks1;
    int marks2;
    int marks3;
    int activity_marks;
    int sports_marks;
    void input1(){
        input();
        cout<<"Enter the marks of 1st subject : ";
        cin>>marks1;
        cout<<"Enter the marks of 2nd subject : ";
        cin>>marks2;
        cout<<"Enter the marks of 3rd subject : ";
        cin>>marks3;
        cout<<"Enter the total activity marks : ";
        cin>>activity_marks;
        cout<<"Enter the total sports marks : ";
        cin>>sports_marks;
    }
    void getresult(){
        int sum;
        char grade;
        sum=marks1+marks2+marks3+activity_marks+sports_marks;
        cout<<"\nThe total marks of the student is "<<sum;
        int g=sum/5;
        if(g>=90){
            grade='A';
        }
        if(g<90 && g>=80){
            grade='B';
        }
        if(g<80 && g>=70){
            grade='C';
        }
        if(g<70 && g>=60){
            grade='D';
        }
        if(g<60 && g>=50){
            grade='E';
        }
        if(g<50){
            grade='F';
        }
        cout<<"\nGrade: "<<grade;
    }
};
int main(){
    result r;
    r.input1();
    r.getresult();
    return 0;
}