#include <stdio.h>
#include <string.h>

int main()
{
    char givenText[100], modifiedText[100];
    int position = 0, countArr[128] = {0}, count = 0;
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
        countArr[modifiedText[i]] = 1;
    }

    for (int i = 0; i < 128; i++)
    {
        count += countArr[i];
    }

    printf("count = %d", count);

    return 0;
}