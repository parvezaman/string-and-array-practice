// not solved yet
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d ", &n);

    for (int i = 0; i < n; i++)
    {
        char intake[100];
        gets(intake);
        int length = strlen(intake);

        int temp = (length + 1) / 2;
        int counter = 0;
        for (int i = 0; i < temp; i++)
        {

            if (intake[i] == intake[temp + i])
            {
                counter++;
            }
        }
        if (counter == temp)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}