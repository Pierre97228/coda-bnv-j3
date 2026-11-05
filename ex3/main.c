#include <stdlib.h>
#include <stdio.h>

int main()
{
	char mot[100];
	printf("Saisir un mot");
	scanf("%s", mot);
	int count = 0;
	while(count <5)
	{
		printf("%s\n", mot);
		count = count + 1;
	}
exit(0);
}
