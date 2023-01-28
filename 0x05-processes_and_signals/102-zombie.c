#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
/**
 * infinite_while - Run an infinite while loop.
 *
 * Return: Always 0.
 */
int infinite_while(void)
{
while (1)
{
sleep(1);
}
return (0);
}
<<<<<<< HEAD

=======
int main(void)
{
pid_t child_pd;
int num_of_proc;
for (num_of_proc = 1; num_of_proc < 6; num_of_proc++)
{
child_pd = fork();
if (child_pd > 0)
{
printf("Zombie process created, PID: %d\n", child_pd);
sleep(1);
}
else
{
exit(0);
}
}
infinite_while();
return (0);
}
>>>>>>> 2ebb6f4ab5beb012d380f7d9f97d58b001bd89ac
