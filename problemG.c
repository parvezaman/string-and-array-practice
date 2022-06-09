#include <stdio.h>
void sort(int n, int arr[])
{
    int max = 0;
    for (int step = 0; step < n - 1; step++)
    {
        for (int i = 0; i < n - step - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);

    int points[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &points[i]);
    }

    int sortedArr[n];
    sort(n, points);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", sortedArr[i]);
    }

    return 0;
}