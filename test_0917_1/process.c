#define _CRT_SECURE_NO_WARNINGS 1

#include"process.h"
pid_t Fork()
{
	pid_t pid;
	if ((pid = fork()) < 0)
	{
		perror("fork fail");
		exit(0);
	}
	return pid;
}