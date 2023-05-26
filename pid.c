#include <stdio.h>
#include <unistd.h>

/*
 * main - PID
 *
 * Return: Always 0.
 */

	int main(void);
{
	pid_t p_id, p_pid;

		p_id = getpid();/*process ID*/
		p_pid = getppid();/*parent process id*/
	printf("Process ID: %d\n", p_id);
	printf("Parent Process ID: %d\n", p_pid);

return (0);
}
