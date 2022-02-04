#include<stdio.h>
int hunt(int *arr,int n,int h){
    int newh=0;
    for(int i=0;i<n;i++){
        if(arr[i]==h){
            h*=3;
            newh=h;
            hunt(arr,n,newh);
        }
    }
    return newh;
}
int main(){
    int n,h;
    printf("Enter the no of Elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter %d Element: ", i);
        scanf("%d",&arr[i]);
    }
    printf("Enter integer to hunt: ");
    scanf("%d",&h);
    printf("%d", hunt(arr,n,h));
}