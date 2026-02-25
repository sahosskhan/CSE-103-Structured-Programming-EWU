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
    int minElement = arr[0];
    int minElementIndex = 0;
    for (i = 1; i < n; i++)
    {
        if (arr[i] < minElement)
        {
            minElement = arr[i];
            minElementIndex = i;
        }
    }
    printf("Min Element Of Array: %d \n", minElement);
    printf("Min ELement Index Of Array: %d", minElementIndex);
}