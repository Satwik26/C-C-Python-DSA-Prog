#include<stdio.h>
struct Date{
    int day, month, year;
};
void sort(int a[],int n){
   int i, j, temp;  
   for(i = 0; i < n; i++){    
      for(j = i+1; j < n; j++){    
            if(a[j] < a[i]){    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }     
}
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    struct Date d[n];
    for(int i=0;i<n;i++){
        printf("Enter date: mm/dd/yyyy: ");
        scanf("%d %d %d\n",&d[i].day,&d[i].month,&d[i].year);
    }
    for(int i=0;i<n;i++){
        if(d[i].year == d[++i].year){
            sort(d[i].month,n);
        }else if(d[i].year==d[++i].year && d[i].month==d[++i].month){
            sort(d[i].day,n);
        }else{
            sort(d[i].year,n);
        }
    }
    for(int i=0;i<n;i++){
        printf("%d %d %d\n",d[i].day,d[i].month,d[i].year);
    }
}