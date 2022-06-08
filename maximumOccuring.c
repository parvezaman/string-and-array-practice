#include <stdio.h>
#include <string.h>
int main()
{
    char givenString[100];
    gets(givenString);

    int length = strlen(givenString);
    // givenString[length] = '\0';

    int alphabets[26] = {0};
    for (int i = 0; givenString[i] != '\0'; i++)
    {
        alphabets[givenString[i] - 'a']++;
    }

    int count = 0;
    char maximum;

    for (int i = 0; i < 26; i++)
    {
        printf("%c -> %d \n", i + 'a', alphabets[i]);
    }

    printf("\n");

    for (int i = 0; i < 26; i++)
    {
        // printf("%d ", alphabets[i]);
        if (alphabets[i] > count)
        {
            count = alphabets[i];
            maximum = i + 'a';
        }
    }

    printf("%c -> %d times", maximum, count);

    return 0;
}