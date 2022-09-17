#include"process.h"

int main()
{

	pid_t pid;
	pid = Fork();
	int x = 1;
	if (pid == 0)
	{
		printf("child: x = %d\n", ++x);
	}
	printf("father£ºx = %d\n", --x);
}