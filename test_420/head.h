#define _CRT_SECURE_NO_WARNINGS 1
#define SNAKE_LONG 60
#define bool int
#define false 0
#define true 1
char g_strGameBack[20][48] = {
                                "����������������������������������������������\n",
                                "��                                          ��\n",
                                "��                                          ��\n",
                                "��                                          ��\n",
                                "��                                          ��\n",
                                "��                                          ��\n",
                                "��                                          ��\n",
                                "��                                          ��\n",
                                "��                                          ��\n",
                                "��                                          ��\n",
                                "��                                          ��\n",
                                "��                                          ��\n",
                                "��                                          ��\n",
                                "��                                          ��\n",
                                "��                                          ��\n",
                                "��                                          ��\n",
                                "��                                          ��\n",
                                "��                                          ��\n",
                                "��                                          ��\n",
                                "����������������������������������������������\n"
};
//����
enum { to_east = 2, to_west = -2, to_north = -1, to_south = 1 };
//������
int g_arrsnake[SNAKE_LONG][3] = { 0 };  //[i][0]��ʾ�е����꣬[i][1]��ʾ�е����꣬[i][2]��ʾ�ƶ��ķ���
//�ߵķ���
int g_nSnakeDir = to_west;
//
bool g_ProFood = true;
//�����������
int g_Row, g_Col;
//�߳���
int g_SnakeLen = 2;
//����
int g_Score = 0;
