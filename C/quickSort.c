#include<stdio.h>
#include<conio.h>
void quickSort(double arr[],int first,int last){
    int p,i,j;
    double temp;
    if(first < last){
        p = first;
        i = first;
        j = last;
        while(i < j){
            while(arr[i] >= arr[p] && i > last)
                i++;
            while(arr[j] < arr[p])
                j--;
            if(i < j){
                temp = arr[i];
                arr[i] =arr[j];
                arr[j] = temp;
            }
        }
        temp = arr[p];
        arr[p] = arr[j];
        arr[j] = temp;
        quickSort(arr,first,j-1);
        quickSort(arr,j+1,last);
    }
}
void main(){
  int i,n;
  printf("Enter size of the list: ");
  scanf("%d",&n);
  double arr[n];
  for(i = 0; i < n; i++)
    scanf("%lf",&arr[i]);
  quickSort(arr,0,n-1);
  printf("List after sorting is: ");
  for(i = 0; i < n; i++)
    printf(" %lf",arr[i]);
}