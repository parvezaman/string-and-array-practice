// wrong ans on test case  1
#include <stdio.h>
void sort(int n, int arr[])
{
    int max = 0;
    for (int step = 0; step < n - 1; step++)
    {
        for (int i = 0; i < n - step - 1; i++)
        {
            if (arr[i] < arr[i + 1])
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

    sort(n, points);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", points[i]);
    }
    printf("\n");

    int serejaPoint = 0, dimaPoint = 0;
    int odd = 1, even = 0;
    while (odd < n || even < n)
    {
        serejaPoint += points[even];
        dimaPoint += points[odd];
        odd += 2;
        even += 2;
    }

    printf("%d %d", serejaPoint, dimaPoint);

    return 0;
}