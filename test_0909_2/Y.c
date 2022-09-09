#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
	int fd = open("/dev/fb0",O_RDWR);
	if(fd == -1)
	{
		perror("open error\n");
		return -1;
	}
	int buf[480][800];
	for(int i=0; i<480; i++)
	{
		for(int j=0; j<800; j++)
		{
			if(0.8*(i-240)*(i-240)+(j-400)*(j-400) <= 150*150)
			{
				buf[i][j] = 0x00000000;
			}
			else
			{
				buf[i][j] = 0x00FFD700;
			}
		}
	}
	int d = write(fd,buf,800*480*4);
	if(d == -1)
	{
		perror("open error\n");
		return -1;
	}
	close(fd);
    return 0;
}
