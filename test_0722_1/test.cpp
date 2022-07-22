#define _CRT_SECURE_NO_WARNINGS 1

#include <string>
using namespace std;
class Room
{
	friend void visiting01(Room& room);
private:
	string bedRoom;//卧室
public:
	string setingRoom;//客厅
public:
	Room(string bedRoom, string setingRoom)
	{
		this->bedRoom = bedRoom;
		this->setingRoom = setingRoom;
	}
};
//普通全局函数
void visiting01(Room& room)
{
	cout << "访问了" << room.setingRoom << endl;
	cout << "访问了" << room.bedRoom << endl;
}
int main(int argc, char* argv[])
{
	Room room("卧室", "客厅");
	visiting01(room);
	return 0;
}
