#include<iostream>
using namespace std;
void input(int n,int arr[]){
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i<<" element: ";
        cin>>arr[i];
    }
}
int sort(int n,int arr[]){
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++){
            if (arr[j] < arr[min]){
                min = j;
                temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;
            }
        }
    }
}
void print(int n,int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    int arr[n],arr1[n];
    input(n,arr);
    sort(n,arr);
    print(n,arr);
    return 0;
}