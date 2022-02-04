#include <stdio.h>
void findMajority(int arr[], int n){
    int maxCount = 0;
    int index = -1; 
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > maxCount) {
            maxCount = count;
            index = i;
        }
    }
    if (maxCount > n / 2)
        printf("Majority Element is: %d\n",arr[index]);
    else
        printf("No Majority Element");
}
int main(){
    int n;
    printf("Enter the no of Elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter %d Element: ", i);
        scanf("%d",&arr[i]);
    }
    findMajority(arr, n);
    return 0;
}