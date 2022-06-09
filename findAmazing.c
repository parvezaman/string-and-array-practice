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
    int amazingCount = 0, min = arr[0], max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            amazingCount++;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            amazingCount++;
        }
    }
    printf("%d", amazingCount);

    return 0;
}