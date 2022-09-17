#include"process.h"
pid_t Fork(void)
{
	pid_t pid;
	if ((pid = fork()) < 0)
	{
		perror("fork fail");
		exit(0);//结束进程
	}
	return pid;
}