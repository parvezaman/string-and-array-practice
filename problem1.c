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

    /*  int i = 0, j = 0;

     do
     {
         scanf("%d", &p[i]);
         i++;
     } while (getchar() != '\n');

     p[i];

     do
     {
         scanf("%d", &q[j]);
         j++;
     } while (getchar() != '\n');
     q[j]; */

    // assign checker with 0
    for (int i = 1; i <= n; i++)
    {
        checker[i] = 0;
    }
    /* int sizeP = sizeof(p) / sizeof(p[0]);
    int sizeQ = sizeof(q) / sizeof(q[0]); */

    // printf("size p = %d, q = %d\n", sizeP, sizeQ);

    // print checker

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", checker[i]);
    }
    printf("\n");
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
    // check checker
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", checker[i]);
    }

    return 0;
}