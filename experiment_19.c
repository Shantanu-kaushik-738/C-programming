#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50];

    printf("Enter two strings: ");
    scanf("%s%s", str1, str2);

    printf("Length of str1 = %lu\n", strlen(str1));
    printf("Length of str2 = %lu\n", strlen(str2));

    strcpy(str1, str2);
    printf("After strcpy, str1 = %s\n", str1);

    strcat(str1, str2);
    printf("After strcat, str1 = %s\n", str1);

    printf("Result of strcmp = %d\n", strcmp(str1, str2));

    return 0;
}
