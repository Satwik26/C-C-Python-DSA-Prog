#include <iostream>
#include<string>
using namespace std;
class Student{
protected:
    string name;
    int roll_number;
    int age;
public:
    void setdata(string,int,int);
    void getdata(void);
};
void Student ::setdata(string n,int r,int a){
    name=n;
    roll_number = r;
    age=a;
}
void Student ::getdata(){
    cout << "The name is " << name << endl;
    cout << "The roll number is " << roll_number << endl;
    cout << "The age is " << age << endl;
}
class Test : public Student{
protected:
    float marks[5];
public:
    void set_marks(float m[5]);
    void get_marks(void);
};
void Test ::set_marks(float m[5]){
    for(int i=0;i<5;i++){
        marks[i]=m[i];
    }
}
void Test ::get_marks(){
    for(int i=0;i<5;i++){
        cout<<"Marks are: "<<marks[i]<<endl;
    }
}
class result: public Test{
    protected:
        float total=0,per;
    public:
        void display(){
            getdata();
            get_marks();
            for(int i=0;i<5;i++){
                total+=marks[i];
            }
            per=total/5;
            cout<<"\nToatal marks is: "<<total<<endl<<"Percentage is: "<<per;
        }
};
int main(){
    string name1;
    int rollno;
    int ag;
    cout<<"Enter the name: ";
    cin>>name1;
    cout<<"Enter the roll no: ";
    cin>>rollno;
    cout<<"Enter the age: ";
    cin>>ag;
    float m1[5];
    for(int i=0;i<5;i++){
        cout<<"Enter the marks "<<i+1<<": ";
        cin>>m1[i];
    };
    result t;
    t.setdata(name1,rollno,ag);
    t.set_marks(m1);
    t.display();
}