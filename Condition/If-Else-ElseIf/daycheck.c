#include <stdio.h>
// find day using swich 
int main()
{
    int day;
    printf("Enter a number (1-7): ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Saturday\n");
        break;
    case 2:
        printf("Sunday\n");
        break;
    case 3:
        printf("Monday\n");
        break;
    case 4:
        printf("Tuesday\n");
        break;
    case 5:
        printf("Wednesday\n");
        break;
    case 6:
        printf("Thursday\n");
        break;
    case 7:
        printf("Friday\n");
        break;
    default:
        printf("Sry, Please enter 1-7.\n");
    }
    return 0;
}


// #include <stdio.h>

// int main()
// {
//     int day;
//     printf("Enter a number (1-7): ");
//     scanf("%d", &day);


//     if (day == 1) {
//         printf("Saturday\n");
//     } 
//     else if (day == 2) {
//         printf("Sunday\n");
//     } 
//     else if (day == 3) {
//         printf("Monday\n");
//     } 
//     else if (day == 4) {
//         printf("Tuesday\n");
//     } 
//     else if (day == 5) {
//         printf("Wednesday\n");
//     } 
//     else if (day == 6) {
//         printf("Thursday\n");
//     } 
//     else if (day == 7) {
//         printf("Friday\n");
//     } 
//     else {
//         printf("Sry, Please enter 1-7.\n");
//     }

//     return 0;
// }