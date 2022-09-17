#pragma once

#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

pid_t Fork(void);
int Pipe(int pipefd[2]);