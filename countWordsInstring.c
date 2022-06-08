#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char word[100];
    fgets(word, 500, stdin);
    word[strlen(word) - 1] = '\0';

    bool startWord = false;
    int counter = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        char value = word[i];
        if (value != ' ')
        {
            startWord = true;
        }
        if (value == ' ')
        {
            if (startWord == true)
            {
                counter++;
                startWord = false;
            }
        }
    }

    if (startWord == true)
    {
        counter++;
    }

    printf("there are %d words\n", counter);

    return 0;
}