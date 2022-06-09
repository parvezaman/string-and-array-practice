#include <stdio.h>
#include <string.h>

int main()
{
    char givenText[1001], modifiedText[1001];
    int position = 0, countArr[26] = {0}, count = 0;
    gets(givenText);

    int length = strlen(givenText);

    for (int i = 0; i < length; i++)
    {
        if (givenText[i] != ' ' && givenText[i] != '{' && givenText[i] != '}' && givenText[i] != ',')
        {
            modifiedText[position] = givenText[i];
            position++;
        }
    }
    modifiedText[position] = '\0';
    for (int i = 0; i < position; i++)
    {
        countArr[modifiedText[i] - 'a'] = 1;
    }

    /* for (int i = 0; i < 26; i++)
    {
        printf("%d ", countArr[i]);
    } */
    for (int i = 0; i < 26; i++)
    {
        count += countArr[i];
    }

    printf("%d", count);

    return 0;
}