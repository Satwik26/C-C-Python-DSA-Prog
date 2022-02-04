#include <stdio.h>
void insertionSort(int arr[],int n){
    int temp;
    for(int i=1; i<n; i++){
        int j=i;
        while(j>0 && arr[j]>arr[j-1]){
            temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
}
int main(){
    int i,n;
    printf("Enter total number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements: \n");
    for(i=0; i<n; i++){
        scanf("%d ",&arr[i]);
    }
    insertionSort(arr,n);
    printf("Array elements in Descending Order:\n");
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }    
    printf("\n");
    return 0;
}