#include <stdio.h>
int main()
{
    int n;
    printf("how many elements are there: ");
    scanf("%d", &n);

    int arr[n]; // you can not declare a variavle length array before scanning the value of length (n in this case)
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int checker[100] = {0};
    for (int i = 0; i < n; i++)
    {
        checker[arr[i] - 1]++;
    }

    for (int i = 0; i < 100; i++)
    {
        printf("%d ", checker[i]);
    }

    /* for (int i = 0; i < 100; i++)
    {
        if (checker[i] == 0)
        {
            printf("%d is missing\n", checker[i] + 1);
        }
    } */

    return 0;
}