#include<iostream>
using namespace std;
template<class T, class T1>
class Show{
        T a;
        T1 b;
    public:
        Show(T x, T1 y){
            a = x;
            b = y;
        }
        void show(){
            cout << a <<" "<< b << endl;
        }
};
int main(){
    Show <float, int> show1 (3.34, 34);
    Show <string, char> show2 ("Satwik", 's');
    show1.show();
    show2.show();
}