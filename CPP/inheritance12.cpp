#include <iostream>
#include <string>
using namespace std;
class Publication{
    protected:
    string title;
    float price;
    public:
    Publication(){
        getDetails();
    }
    void getDetails(){
        cout<<"\nEnter title: ";
        cin>>title;
        cout<<"Enter price: ";
        cin>>price;
    }
};
class Book: public Publication{
    int no_pages;
    public:
    Book():Publication(){
        cout<<"Enter number of pages: ";
        cin>>no_pages;
    }
    void view(){
        cout<<"\nType: Book";
        cout<<"\nTitle: "<<title;
        cout<<"\nPrice: "<<price;
        cout<<"\nNumber of pages: "<<no_pages<<endl;
    }
};
class Lecture:public Publication{
    float play_time;
    public:
    Lecture():Publication(){
        cout<<"Enter play_time: ";
        cin>>play_time;
    }
    void view(){
        cout<<"\nType: Lecture";
        cout<<"\nTitle: "<<title;
        cout<<"\nPrice: "<<price;
        cout<<"\nPlay time: "<<play_time<<"mins"<<endl;
    }
};
int main(){
    Book book;
    Lecture cd;
    book.view();
    cd.view();
    return 0;
}