#include<stdio.h>
void nge(int arr [],int n){
    int larg = arr[0];
    for (int i=0; i < n; i++){    
       if(arr[i] > larg)    
           larg = arr[i];    
    }
    for(int i = 0;i<n;i++){
        int next=larg;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                next = arr[j];
                break;
            }
            if(i==n-1){
                arr[i]=next;
            }
        }
    }
}
int main(){
    int i,n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    nge(arr,n);
    return 0;

}