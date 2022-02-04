#include <iostream>
using namespace std;
template <class Type>
class Array{
    private:
        Type *arr;
        int n;
    public:
    Array(int n){
        this->n=n;
        arr=new Type[n];
    }
    void read(){
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
    }
    void sort(){
        Type temp;
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                if(arr[i] > arr[j]){
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    void display(){
        for(int i = 0; i < n; i++){
            cout<<arr[i]<<" ";
        }
            cout<<endl;
    }
};
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    Array <int> iobj(n);
    Array <float> fobj(n);
    cout<<"Enter integer array: ";
    iobj.read();
    cout<<"Enter floating number array: ";
    fobj.read();
    iobj.sort();
    fobj.sort();
    cout<<"Sorted integer array: ";
    iobj.display();
    cout<<"Sorted floating number array: ";
    fobj.display();
}