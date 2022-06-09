#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char empty;
    scanf("%d", &n);
    scanf("%c", &empty);
    int totalFaces = 0;
    for (int i = 0; i < n; i++)
    {
        char givenText[100];
        gets(givenText);

        if (strcmp(givenText, "Tetrahedron") == 0)
        {
            totalFaces += 4;
        }
        else if (strcmp(givenText, "Cube") == 0)
        {
            totalFaces += 6;
        }
        else if (strcmp(givenText, "Octahedron") == 0)
        {
            totalFaces += 8;
        }
        else if (strcmp(givenText, "Dodecahedron") == 0)
        {
            totalFaces += 12;
        }
        else if (strcmp(givenText, "Icosahedron") == 0)
        {
            totalFaces += 20;
        }
    }

    printf("%d", totalFaces);

    return 0;
}