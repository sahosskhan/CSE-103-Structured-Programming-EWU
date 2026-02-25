#include <stdio.h>
int main()
{
    int n, i, evenCount = 0, oddCount = 0;
    printf("Define Size Of Array: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
    printf("Even Number Inside Array: %d\n", evenCount);
    printf("Odd Number Inside Array: %d", oddCount);
}