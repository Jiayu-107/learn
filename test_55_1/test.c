#define _CRT_SECURE_NO_WARNINGS 1

int Add(int x, int y)
{
	return x + y;
}

int main()
{
	//ָ������
	int* arr[10];

	//����ָ��
	int* (*pa)[10] = &arr;

	//����ָ��
	int(*pAdd)(int, int) = Add;//&Add
	//int sum = (*pAdd)(2, 3);
	//int sum = pAdd(2, 3);
	//int sum = Add(2, 3); //����������ָ���ʹ�ö���ŷ�˵�

	//����ָ������
	int (*parr[10]) (int, int);
	//ָ����ָ�������ָ��
	int (*(*parr)[10]) (int, int) = &parr;


	//ÿ��ָ����붼�ó�ʼ�������ܳ���Ұָ�룻���Ը���ֵ
	return 0;
}