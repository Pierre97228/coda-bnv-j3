#include <stdlib.h>
#include <stdio.h>

int main()
{
	int  nombre;
	printf("choisis un nombre entier");
	scanf("%d",&nombre);
	if(nombre<42)
		{
		printf("le nombre est inférieur a 42");
		}
	else if(nombre>42)
		{
		printf("Le nombre est  supérieur a 42");
		}
	else
		{
		printf("Le nombre est égal a 42");
		}
	exit(0);

}
