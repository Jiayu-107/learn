#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <graphics.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")

#define PI      3.1415926535
#define NUM     13 
//�̻���
struct JET
{
    int     x, y;   //����
    int     hx, hy; //��ߵ�����
    bool    shoot; //�ж��̻����ǲ��Ƿ���״̬

    DWORD t1, t2, dt; //�̻���������ٶ�
    IMAGE img[2];    //ͼƬ2��  һ��һ��������
    byte n : 1;   //�ṹ�� λ�� ���� n   ռ���ڴ��һ��λ��
}jet[NUM];

//�̻�
struct FIRE
{
    int r;    //�뾶
    int maxr;  //���뾶
    int x, y;       //����ڴ��� ���ĵ������
    int cenx, ceny; //�����ͼƬ���� ���ĵ������
    int width, height;
    int xy[240][240];  //ͼƬ ���浽һ�����ؾ���

    bool show;              //�Ƿ�����
    bool draw;              //�Ƿ����
    DWORD t1, t2, dt;       //��ը���ٶ�
}fire[NUM];


void Init(int i);
void Load();
void Chose(DWORD& t1);
void Shoot();
void Show(DWORD* pem);