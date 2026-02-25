#include <stdio.h>

int main() {
    int n, i, temp;
    printf("Define Size Of Array: ");
    scanf("%d", &n);
    int arr [n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
   printf("Array: ");
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = 0; i < n / 2; i++) { // using temp var
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    printf("Reversed array:");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}