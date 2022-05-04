
//signal是一个函数声明
//signal函数的参数有两个，第一个是 int。第二个是 函数指针，该函数指针指向的函数的参数是 int，返回类型是void
//signal函数的返回类型也是一个函数指针：该函数指针指向的函数的参数是 int，返回类型是 void


void(*signal(int, void(*)(int)))(int);

//简化
typedef void(*pfun_t)(int);
pfun_t signal(int, pfun_t);

typedef unsigned int uint;