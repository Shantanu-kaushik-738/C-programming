#include <stdio.h>
int main()
{
    float r, a;
    printf("enter the radius of circle : ");
    scanf("%f", &r);

    a = 3.14159 * r * r;

    printf("%f\n", a);

    return 0;
}
