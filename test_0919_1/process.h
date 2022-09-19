#pragma once

#include<sys/types.h>
#include<sys/stat.h>
#include<sys/wait.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<signal>

pid_t Fork(void);
int Pipe(int pipefd[2]);
int MKfifo(const char* pathname, mode_t mode);