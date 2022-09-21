#include"process.h"

int main(int argc, char** argv)
{
    //获取 system V ipc key
    key_t key = ftok(argv[1], atoi(argv[2]));
    if(-1 == key)
    {
        perror("ftok fail");
    }
    //创建或打开一个 system V ipc shm
    int shm_id = shmget(key,0,0);
    if(-1 == shm_id)
    {
        perror("shmget fail");
    }
    //映射
    char* p = shmat(shm_id,NULL,0);
    //读
    printf("%s\n",p);
    //解映射
    shmdt(p);

    return 0;
}