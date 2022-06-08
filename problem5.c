#include <stdio.h>
#include <string.h>
int main()
{
    char vowels[6] = {'a', 'e', 'i', 'o', 'u'}, word[100];
    fgets(word, 100, stdin);
    int length = strlen(word);
    word[length] = '\0';
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (word[i] == vowels[j])
            {
                printf("%d ", i);
            }
        }
    }

    return 0;
}