#include <stdio.h>
#include <string.h>
int main()
{
    char sentance[100];
    fgets(sentance, 100, stdin);
    int length = strlen(sentance);
    sentance[length] = '\0';

    int checker[26] = {0};
    for (int i = 0; i < length; i++)
    {
        // checker[sentance[i] - 'a'] = 1;
        checker[sentance[i] - 'a']++;
    }

    /* for (int i = 0; i < 26; i++)
    {
        if (checker[i] == 0)
        {
            printf("it doesnt have all the charecters!");
            return 0;
        }
    } */

    for (char i = 'a'; i <= 'z'; i++)
    {
        if (checker[i - 'a'] == 0)
        {
            printf("%c is missing No\n", i);
            return 0;
        }
    }

    printf("It has all the charecters!\n");

    // how many times occered?
    for (char i = 0; i < 26; i++)
    {
        printf("%c occured %d times\n", i + 'a', checker[i]);
    }

    return 0;
}