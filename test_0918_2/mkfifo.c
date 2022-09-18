#include"process.h"

int main(int argc, char** argv)
{
    MKfifo(argv[1],0664);
    return 0;
}