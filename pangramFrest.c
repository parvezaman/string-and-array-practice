#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    char givenText[n], modifiedText[n];

    gets(givenText);

    int length = strlen(givenText);
    givenText[length] = '\0';

    for (int i = 0; i < length; i++)
    {
        modifiedText[i] = tolower(givenText[i]);
    }
    modifiedText[length] = '\0';

    int checker[26] = {0};
    for (int i = 0; i < length; i++)
    {
        checker[modifiedText[i] - 'a'] = 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (checker[i] == 0)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");

    return 0;
}