#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100], jogfol[101];
    scanf("%s %s", a, b);
    strrev(a);
    strrev(b);
    int i = 0, j = 0, k = 0, hateThake = 0;
    while (i < strlen(a) && j < strlen(b))
    {
        int sum = (a[i] - '0') + (b[j] - '0') + hateThake;
        jogfol[k] = sum % 10 + '0';
        hateThake = sum / 10;
        i++;
        j++;
        k++;
    }
    while (i < strlen(a))
    {
        int sum = (a[i] - '0') + hateThake;
        jogfol[k] = sum % 10 + '0';
        hateThake = sum / 10;
        i++;
        k++;
    }
    while (j < strlen(b))
    {
        int sum = (b[j] - '0') + hateThake;
        jogfol[k] = sum % 10 + '0';
        hateThake = sum / 10;
        j++;
        k++;
    }
    if (hateThake != 0)
    {
        jogfol[k] = hateThake + '0';
        k++;
    }

    jogfol[k] = '\0';

    strrev(jogfol);
    printf("Jogfor is %s\n", jogfol);

    return 0;
}