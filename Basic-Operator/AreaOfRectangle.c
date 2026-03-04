#include <stdio.h>

int main() {
    int l, w;
    
    printf("Enter length: ");
    scanf("%d", &l);
    printf("Enter width: ");
    scanf("%d", &w);

    printf("Area of rectangle = %d sq. units\n", l * w);
    
    return 0;
}