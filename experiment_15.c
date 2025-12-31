#include <stdio.h>
int main()
{
    int n, k, f = 0;
    printf("enter the size of array : ");
    scanf("%d", &n);

    int arr[n];
    printf("enter the element of the array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("enter the number which you find : \n");
    scanf("%d", &k);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            f = 1;
            break;
        }
        if (f)
            printf("Found\n");
        else
            printf("Not Found\n");
    }
    return 0;
}
