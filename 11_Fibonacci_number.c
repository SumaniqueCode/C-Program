// Creted by Suman Regmi

#include <stdio.h>
#include <conio.h>
int main()
{

    int i, n, a = 0, b = 1, c;
    printf("\nHow many fibonacci number do you want?\n");
    scanf("%d", &n);
    for (i = 0; i < n ; i++)
    {
        printf("%d\t", a);
        c = a + b;
        a = b;
        b = c;
    }

    getch();
}