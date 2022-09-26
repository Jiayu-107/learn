#pragma once

#include<sys/types.h>
#include<sys/stat.h>
#include<sys/wait.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<signal.h>

pid_t Fork(void);
int Pipe(int pipefd[2]);
int MKfifo(const char* pathname, mode_t mode);