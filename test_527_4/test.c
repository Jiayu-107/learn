#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<errno.h>

//int main()
//{
	//FILE* pfWrite = fopen("test.txt", "w");
	//
	////д�ļ�
	//fputc('h', pfWrite);
	//fputc('e', pfWrite);
	//fputc('l', pfWrite);
	//fputc('l', pfWrite);
	//fputc('o', pfWrite);

	////�ر��ļ�
	//fclose(pfWrite);
	//pfWrite = NULL;


//	FILE* pfRead = fopen("test.txt", "r");
//	if (NULL == pfRead)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	
//	//���ļ�
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	
//	//�ر��ļ�
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}



//�Ӽ�������
//�������Ļ
//����&��Ļ�����ⲿ�豸

//���� - ��׼�����豸 - stdin
//��Ļ - ��׼����豸 = stdout
//��һ������Ĭ�ϴ򿪵��������豸

//stdin FILE*
//stdout FILE*
//stderr FILE*



int main()
{
	int ch = fgetc(stdin);
	fputc(ch, stdout);

	return 0;
}