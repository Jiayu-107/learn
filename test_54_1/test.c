
//signal��һ����������
//signal�����Ĳ�������������һ���� int���ڶ����� ����ָ�룬�ú���ָ��ָ��ĺ����Ĳ����� int������������void
//signal�����ķ�������Ҳ��һ������ָ�룺�ú���ָ��ָ��ĺ����Ĳ����� int������������ void


void(*signal(int, void(*)(int)))(int);

//��
typedef void(*pfun_t)(int);
pfun_t signal(int, pfun_t);

typedef unsigned int uint;