#include <stdio.h>
// calculator using switch
int main()
{
    int n1, n2;
    char op;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        printf("Result: %d + %d = %d\n", n1, n2, n1 + n2);
        break;
    case '-':
        printf("Result: %d - %d = %d\n", n1, n2, n1 - n2);
        break;
    case '*':
        printf("Result: %d * %d = %d\n", n1, n2, n1 * n2);
        break;
    case '/':
        if (n2 != 0)
            printf("Result: %d / %d = %d\n", n1, n2, n1 / n2);
        else
        printf("Sry, Division by zero\n");
        break;
    default:
        printf("Sry, Invalid operator\n");
    }
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int n1, n2;
//     char op;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &n1, &n2);
//     printf("Enter operator (+, -, *, /): ");
//     scanf(" %c", &op);

//     if (op == '+') {
//         printf("Result: %d + %d = %d\n", n1, n2, n1 + n2);
//     } 
//     else if (op == '-') {
//         printf("Result: %d - %d = %d\n", n1, n2, n1 - n2);
//     } 
//     else if (op == '*') {
//         printf("Result: %d * %d = %d\n", n1, n2, n1 * n2);
//     } 
//     else if (op == '/') {
//         if (n2 != 0)
//             printf("Result: %d / %d = %d\n", n1, n2, n1 / n2);
//         else
//             printf("Sry, Division by zero\n");
//     } 
//     else {
//         printf("Sry, Invalid operator\n");
//     }

//     return 0;
// }