#include<stdio.h>
int binary_search(int arr[], int k,int sz)
{
	int left = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);//sizeof(arr)�����ָ��Ĵ�С��64λƽ̨Ϊ8���ֽڣ�
	                                        //sizeof(srr[0])�����int���͵Ĵ�С��Ϊ4���ֽڣ�
                                            //����˵Ӧ��������������������Ԫ�صĸ������Ա�����������±ꣻ
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			left = mid + 1;
		}
		else if (arr[mid] < k)
		{
			right = mid - 1;
		}
		else
			return mid;
	}
	return -1;
	
}
int main()
{
	//����һ�����ֲ��Һ�����
	//��һ�����������в��Ҿ����ĳ����
	//����ҵ��˷�����������±����������Ҳ�������-1��
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 5;
	int ret = binary_search(arr, k,sz);//����ȥ������arr��Ԫ�صĵ�ַ��
	if (-1 == ret)
		printf("�Ҳ���ָ�������֣�");
	else
		printf("�ҵ���!�±���%d; ������%d\n", ret,arr[ret]);
	return 0;
}