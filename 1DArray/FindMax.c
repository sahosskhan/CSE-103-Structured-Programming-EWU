#include <stdio.h>
int main()
{
    int n, i;
    printf("Define Size Of Array: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int maxElement = arr[0];
    int maxElementIndex = 0;
    for (i = 1; i < n; i++)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
            maxElementIndex = i;
        }
    }
    printf("Max Element Of Array: %d \n", maxElement);
    printf("Max ELement Index Of Array: %d", maxElementIndex);
}