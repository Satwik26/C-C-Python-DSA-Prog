#include<stdio.h>
void input(int n,int arr[n][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter the element in index no [%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
}
int nonZero(int n,int arr[n][n]){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=0){
                count++;
            }
        }
    }
    return count;
}
int sumLeadingDiagonal(int n,int arr[n][n]){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>i){
                sum+=arr[i][j];
            }
        }
    }
    return sum;
}
int minorDiagonal(int n,int arr[n][n]){
    printf("\nAll the elements below minor diagonal are: ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j>=3){
                printf("%d ",arr[i][j]);
            }
        }
    }
}
int prodDiagonals(int n,int arr[n][n]){
    int prodMazor=1,prodMinor=1,total;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                prodMazor*=arr[i][j];
            }
            if(i+j==n-1){
                prodMinor*=arr[i][j];
            }
        }
    }
    total=prodMinor*prodMazor;
    printf("\nProduct of mazor diagonal is: %d",prodMazor);
    printf("\nProduct of minor diagonal is: %d",prodMinor);
    printf("\nProduct of both the diagonals: %d",total);
}
int main(){
    int n;
    printf("Enter the order of square matrix: ");
    scanf("%d",&n);
    int arr[n][n];
    input(n,arr);
    printf("Number of non zero element is: %d",nonZero(n,arr));
    printf("\nSum of elements above leading diagonal is: %d",sumLeadingDiagonal(n,arr));
    minorDiagonal(n,arr);
    prodDiagonals(n,arr);
}