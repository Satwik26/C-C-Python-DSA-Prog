#include<iostream>
using namespace std;
template <class T>
void sort(T arr[], int n){
    T temp;
	for (int i = 0; i < n; i++){
		for (int j = i+1; j < n; j++){
			if (arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main(){
    int N;
    cout<<"Enter the size of array: ";
    cin>>N;
	int iarray[N];
	float farray[N];
	cout<<"Enter the elements for integer array : ";
	for (int i = 0; i < N; i++){
		cin>>iarray[i];
	}
	cout<<"Enter the elements for float array : ";
	for (int i = 0; i < N; i++){
		cin>>farray[i];
	}
	sort<int>(iarray,N);
	sort<float>(farray, N);
	cout<<"After sorting, the array is: "<<endl;
	for (int i = 0; i < N; i++){
		cout<<iarray[i]<<", ";
	}
	cout<<endl;
	for (int i = 0; i < N; i++){
		cout<<farray[i]<<", ";
	}
}