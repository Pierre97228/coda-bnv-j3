#include <stdio.h>

int main(void)
{
    int nombre;

    printf("Saisissez un nombre different de 0 : ");
    scanf("%d", &nombre);

    if (nombre > 0)
    {
        for (int i = 0; i <= nombre; i++)
        {
            printf("%d\n", i);
        }
    }
    else
    {
        for (int i = 0; i >= nombre; i--)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
