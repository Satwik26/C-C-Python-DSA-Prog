#include<iostream>
using namespace std;
template <class T>
T Max(T t[], int N){
	T temp = t[0];
	for (int i = 0; i < N; i++){
		if (temp<t[i]){
			temp = t[i];
		}
	}
	return temp;
}
int main(){
    int N;
    cout<<"Enter the size of array: ";
    cin>>N;
	int array[N];
	cout<<"Enter numbers: ";
	for (int i = 0; i < N; i++){
		cin>>array[i];
	}
	float array1[N];
	cout<<"Enter float num: ";
	for(int i=0;i<N;i++){
	    cin>>array1[i];
	}
	cout<<"Largest Number of array is: "<<Max(array,N)<<endl;
	cout<<"Largest Number of array is: "<<Max(array1,N)<<endl;
}