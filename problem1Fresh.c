#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int checker[n];

    int p, q;
    scanf("%d", &p);
    int pArr[p];
    for (int i = 0; i < p; i++)
    {
        scanf("%d", &pArr[i]);
    }

    scanf("%d", &q);
    int qArr[q];
    for (int i = 0; i < q; i++)
    {
        scanf("%d", &qArr[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        checker[i] = 0;
    }

    for (int i = 0; i < p; i++)
    {
        checker[pArr[i]]++;
    }
    for (int i = 0; i < q; i++)
    {
        checker[qArr[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (checker[i] == 0)
        {
            printf("Oh, my keyboard!");
            return 0;
        }
    }
    printf("I become the guy.");

    return 0;
}