#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *main-prototype
 *@ac:argument 1
 *@av:argument 2
 *Return: 0
 */

int main(int ac, char **av)

	{
int i;
for (i = 0; i < ac; i++)
{
/* Printing all the Arguments*/
printf("%s ", av[i]);
}
printf("\n");
	return (0);
}
