#include<iostream>
using namespace std;

//�� Data ��һ������
class Data
{
//���� Ĭ��Ϊ˽��
private:
	int mA;//��Ҫ�����г�Ա��ʼ��
protected://����
	int mB;
public://����
	int mC;
//������ڲ� ������Ȩ��֮��
	void ShowData(void)
	{
		cout << mA << " " << mB << " " << mC << endl;
	}
};

int main(int argc, char* argv[])
{
	//��ʵ����һ������
	Data ob;
	//���ⲻ��ֱ�ӷ��� ��ı�����˽������
	//cout<<ob.mA<<endl; //err
	//cout<<ob.mb<<endl; //err
	//cout<<ob.mC<<endl; //ʹ����δ��ʼ���ľֲ�����

	//���еĳ�Ա���� ��Ҫ�������
	ob.ShowData();
	return 0;
}