#include <stdio.h>  

void star(int n)
{
    int m;
    m = 2 * n - 1;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == j || j == (m - i + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf_s("%d", &n);
    star(n);
    return 0;
}