#include<stdio.h>
void input(int n,int poly1[n],int m,int poly2[m]){
    printf("\nEnter the coeff for 1st polynomial\n");
    for(int i=n;i>=0;i--){
        printf("Enter the coeff of x^%d: ",i);
        scanf("%d",&poly1[i]);
    }
    printf("\nEneter the coeff for 2nd polynomial\n");
    for(int i=m;i>=0;i--){
        printf("Enter the coeff of x^%d:",i);
        scanf("%d",&poly2[i]);
    }
}
void print(int n,int poly1[n],int m,int poly2[m]){
    printf("1st polynomil: ");
    for(int i=n;i>=0;i--){
        if(i!=0){
            printf("%dx^%d+ ",poly1[i],i);
        }else{
            printf("%d",poly1[i]);
        }
    }
    printf("\n2nd polynomial: ");
    for(int i=m;i>=0;i--){
        if(i!=0){
            printf("%dx^%d+ ",poly2[i],i);
        }else{
            printf("%d",poly2[i]);
        }
    }
}
int sum(int n,int m,int poly1[n],int poly2[m]){
    int larg=(n>m)?n:m;
    int temp=(n>m)?m:n;
    int sum[larg];
    for(int i=0;i<=larg;i++){
        sum[i]=0;
    }
    printf("\nSum of both the polynomial is: ");
    for(int i=larg;i>=0;i--){
        if(i<=temp){
            sum[i]+=poly1[i]+poly2[i];
        }
        if(i>temp){
            if(temp==n){
                sum[i]+=poly2[i];
            }if(temp==m){
                sum[i]+=poly1[i];
            } 
        }
        if(i!=0){
            printf("%dx^%d+",sum[i],i);
        }else{
            printf("%d",sum[i]);         
        }
}}
int product(int n,int m,int poly1[n],int poly2[m]){
    int prod[n*m];
    for(int i=0;i<n*m;i++){
        prod[i]=0;
    }
    for(int i=n;i>=0;i--){
        for(int j=m;j>=0;j--){
            prod[i*j]=poly1[i]*poly2[j];
        }
    }
    for(int i=0;i<n*m;i++){
        //if()
        printf(" %d ",prod[i]);
    }
}
int main(){
    int n,m;
    printf("Enter the highest degree of 1st polynomial: ");
    scanf("%d",&n);
    printf("Enter the highest degree of 2nd polynomial: ");
    scanf("%d",&m);
    int poly1[n],poly2[m];
    input(n,poly1,m,poly2);
    print(n,poly1,m,poly2);
    sum(n,m,poly1,poly2);
    product(n,m,poly1,poly2);
}