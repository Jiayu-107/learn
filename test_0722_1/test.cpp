#define _CRT_SECURE_NO_WARNINGS 1

#include <string>
using namespace std;
class Room
{
	friend void visiting01(Room& room);
private:
	string bedRoom;//����
public:
	string setingRoom;//����
public:
	Room(string bedRoom, string setingRoom)
	{
		this->bedRoom = bedRoom;
		this->setingRoom = setingRoom;
	}
};
//��ͨȫ�ֺ���
void visiting01(Room& room)
{
	cout << "������" << room.setingRoom << endl;
	cout << "������" << room.bedRoom << endl;
}
int main(int argc, char* argv[])
{
	Room room("����", "����");
	visiting01(room);
	return 0;
}
