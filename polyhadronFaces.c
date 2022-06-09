#include <stdio.h>
#include <string.h>
int main()
{
    // int n, Tetrahedron = 4, Cube = 6, Octahedron = 8, Dodecahedron = 12, Icosahedron = 20;
    int n;
    scanf("%d\n", &n);
    int totalFaces = 0;
    for (int i = 0; i < n; i++)
    {
        char givenText[100];
        gets(givenText);
        int length = strlen(givenText);
        givenText[length] = '\0';
        // printf("%s", givenText);
        if (givenText == "Tetrahedron")
        {
            totalFaces += 4;
        }
        else if (givenText == "Octahedron")
        {
            totalFaces += 8;
        }
        else if (givenText == "Dodecahedron")
        {
            totalFaces += 12;
        }
        else if (givenText == "Icosahedron")
        {
            totalFaces += 20;
        }
    }

    printf("%d", totalFaces);

    return 0;
}