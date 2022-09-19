#include"process.h"

int main(int argc, char** argv)
{
    int ret = kill(atoi(argv[1]),SIGKILL);
    if(-1 == ret)
    {
        perror("kill fail");
        return -1;
    }
    return 0;
}