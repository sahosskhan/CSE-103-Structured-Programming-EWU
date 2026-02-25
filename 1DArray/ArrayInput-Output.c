#include <stdio.h>
int main(){
    int n,i;
    printf("Define Size Of Array: ");
    scanf("%d", &n);
    int arr [n];
    for(i=0; i<n; i++){ //i=0 because array index start with 0
        scanf("%d", &arr[i]);
    }
    printf("Array: ");
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}