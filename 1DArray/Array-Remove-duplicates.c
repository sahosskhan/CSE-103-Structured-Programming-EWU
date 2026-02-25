#include <stdio.h>
int main(){
    int n,i;
    printf("Define Size Of Array: ");
    scanf("%d", &n);
    int arr [n];
    for(i=0; i<n; i++){ 
        scanf("%d", &arr[i]);
    }
    printf("Array: ");
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
     printf("Unique Array: ");
   for (int i = 0; i < n; i++) {
        int isDup = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDup = 1;
                break;
            }
        } 
        if (!isDup) printf("%d ", arr[i]);
    }

}