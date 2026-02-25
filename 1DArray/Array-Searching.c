#include <stdio.h>
int main(){
    int n,i,searchElement;
    printf("Define Size Of Array: ");
    scanf("%d", &n);
   printf("Enter target value: ");
    scanf("%d", &searchElement);
    int arr [n];
    for(i=0; i<n; i++){ //i=0 because array index start with 0
        scanf("%d", &arr[i]);
    }

  for(i=0;i<n;i++){
    if(arr[i]==searchElement){
        printf("Target Value %d is Found",searchElement);
        break;
    }
    if(i==n-1){
       printf("Target Value %d is not Found",searchElement);
    }
  }
}