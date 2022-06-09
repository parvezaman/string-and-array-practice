#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int win_mishka = 0, win_chris = 0;
    int dv_mishka, dv_chris;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &dv_mishka, &dv_chris);
        if (dv_mishka > dv_chris)
        {
            win_mishka++;
        }
        else if (dv_chris > dv_mishka)
        {
            win_chris++;
        }
        // printf("%d %d\n",i,j);
    }
    if (win_mishka > win_chris)
    {
        printf("Mishka");
    }
    else if (win_mishka == win_chris)
    {
        printf("Friendship is magic!^^");
    }
    else
    {
        printf("Chris");
    }
    return 0;
}