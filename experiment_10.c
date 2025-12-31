#include <stdio.h>
int main()
{
    int a, b, ch;
    printf("enter two numbers : ");
    scanf("%d %d", &a, &b);

    printf("enter 1 for addtion\nenter 2 for subtraction\nenter 3 for multiplication\nenter 4 for division : \n");

    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("addtion of %d and %d is %d\n", a, b, a + b);
        break;
    case 2:
        printf("subtraction of %d and %d is %d\n", a, b, a - b);

        break;
    case 3:
        printf("multiplication of %d and %d is %d\n", a, b, a * b);

        break;
    case 4:
        printf("division of %d and %d is %d\n", a, b, a / b);

        break;
    default:
        printf("Invalid\n");
    }
    return 0;
}
