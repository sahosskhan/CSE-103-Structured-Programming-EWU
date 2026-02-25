#include <stdio.h>
int main(){
    int n,i,sum=0;
    float avg=0;
    printf("Define Size Of Array: ");
    scanf("%d", &n);
    int arr [n];
    for(i=0; i<n; i++){ 
        scanf("%d", &arr[i]);
        sum+= arr[i];
        avg=(sum*1.00)/n;
    }
    printf("Sum Of Array's Element: %d\n", sum);
    printf("Average Of Array's Elements %.3f",avg);
   
}