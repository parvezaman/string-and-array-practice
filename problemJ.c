#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    scanf("\n");
    char intakeString[n];
    gets(intakeString);
    // printf("%s %d", intakeString, strlen(intakeString));
    int i = 0, count = 0;
    while (intakeString[i] == 'x' && intakeString[i + 1] == 'x' && intakeString[i + 2] == 'x')
    {
        count++;
        i++;
    }
    printf("%d", count);

    return 0;
}