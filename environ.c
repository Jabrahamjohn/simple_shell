#include <unistd.h>
#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
	int i = 0;
	(void)argc;
	(void)argv;
while(environ[i] != NULL)
{
	printf("%s\n", environ[i]);
	i++;
}
return 0;
}
