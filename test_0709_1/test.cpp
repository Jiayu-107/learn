#define _CRT_SECURE_NO_WARNINGS 1

void conversion()//转换为8进制
{
	linkstack s; int N; char e;
	Initstack(s);
	cin >> N;
	while (N)
	{
		Push(s, N % 8);
		N = N / 8;
	}
	while (s)
	{
		Pop(s, e);
		cout << e << " ";
	}
}

