#include <stdio.h>
void selection_sort(float arr[],int n){
    int i, j,min;
    float temp=0;
    for (i=0; i<n; i++){
        min = i;
        for (j=i+1; j<n; j++){
            if (arr[j] < arr[min])
                min = j;
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
void main(){
    int i,n;
    printf("Enter size of an array: ");
    scanf("%d", &n);
    float arr[n];
    printf("Enter elements of an array:\n");
    for(i=0; i<n; i++)
        scanf("%2f ", &arr[i]);
    selection_sort(arr,n);
    printf("After sorting:\n");
    for(i=0; i<n; i++)
        printf("%2f ", arr[i]);
}