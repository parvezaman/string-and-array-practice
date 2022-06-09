#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0], min = arr[0], amazing = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i < min])
        {
            min = arr[i];
        }
    }
    printf("max = %d\n", max);
    printf("min = %d\n", min);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == max || arr[i] == min)
        {
            amazing++;
        }
    }

    printf("%d", amazing);

    return 0;
}