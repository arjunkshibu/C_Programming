#include <stdio.h>

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("printing :\n");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");

    printf("Printing in reverse :\n");
    for (int i = 4; i >= 0; i--)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");

    // SUM and average?

    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    printf("%d", sum);






    printf("\n");
    // size in bytes
    printf("%lu \n", sizeof(arr));

    // No bound checking Ex:
    printf("%d \n", arr[10]);
    return 0;
}