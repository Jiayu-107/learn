#define _CRT_SECURE_NO_WARNINGS 1

//��������Ϊ����ָ����Խ���ʲô����
void test(char** p)
{

}

int main()
{
	char ch = 'w';
	char* p = &ch;
	char** pq = &p;
	char* parr[10];
	test(pq);
	test(&p);
	test(parr);
	return 0;
}