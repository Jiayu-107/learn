#define _CRT_SECURE_NO_WARNINGS 1
#define SNAKE_LONG 60
#define bool int
#define false 0
#define true 1
char g_strGameBack[20][48] = {
                                "■■■■■■■■■■■■■■■■■■■■■■■\n",
                                "■                                          ■\n",
                                "■                                          ■\n",
                                "■                                          ■\n",
                                "■                                          ■\n",
                                "■                                          ■\n",
                                "■                                          ■\n",
                                "■                                          ■\n",
                                "■                                          ■\n",
                                "■                                          ■\n",
                                "■                                          ■\n",
                                "■                                          ■\n",
                                "■                                          ■\n",
                                "■                                          ■\n",
                                "■                                          ■\n",
                                "■                                          ■\n",
                                "■                                          ■\n",
                                "■                                          ■\n",
                                "■                                          ■\n",
                                "■■■■■■■■■■■■■■■■■■■■■■■\n"
};
//方向
enum { to_east = 2, to_west = -2, to_north = -1, to_south = 1 };
//蛇数组
int g_arrsnake[SNAKE_LONG][3] = { 0 };  //[i][0]表示行的坐标，[i][1]表示列的坐标，[i][2]表示移动的方向
//蛇的方向
int g_nSnakeDir = to_west;
//
bool g_ProFood = true;
//产生随机坐标
int g_Row, g_Col;
//蛇长度
int g_SnakeLen = 2;
//分数
int g_Score = 0;
