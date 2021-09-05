#include<stdio.h>
int input(int n,int ptr){
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d element",i+1);
        scanf("%d",&a[i]);
        ptr=&a[i];
    }
}
int main(){
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    int ptr = (int*)malloc(n*sizeof(arr));
    return 0;
}