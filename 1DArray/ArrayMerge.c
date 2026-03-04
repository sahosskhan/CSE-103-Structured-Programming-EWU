#include <stdio.h>
int main()
{
    int n, n1, i, n2, n3, k = 0;
    printf("Define Size Of Array1: ");
    scanf("%d", &n1);
    int arr1[n1];
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Define Size Of Array2: ");
    scanf("%d", &n2);
    int arr2[n2];
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    n3 = n1 + n2;
    int arr3[n3];

    for (i = 0; i < n1; i++)
    {
        arr3[k] = arr1[i];
        k++;
    }
    for (i = 0; i < n2; i++)
    {
        arr3[k] = arr2[i];
        k++;
    }
    printf("Merged Array: ");
    for (i = 0; i < n3; i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n");
}