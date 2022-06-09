#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    scanf("\n");

    for (int i = 0; i < n; i++)
    {
        char intake[100];
        gets(intake);
        int length = strlen(intake);
        if (length % 2 != 0)
        {
            printf("NO");
        }

        if (strcmp(intake[i], intake[(length / 2) + i]) == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }

    return 0;
}