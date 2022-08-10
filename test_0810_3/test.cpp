#define _CRT_SECURE_NO_WARNINGS 1

int*** array;
// 假定数组第一维为 m， 第二维为 n， 第三维为h
// 动态分配空间
array = new int** [m];
for (int i = 0; i < m; i++)
{
    array[i] = new int* [n];
    for (int j = 0; j < n; j++)
    {
        array[i][j] = new int[h];
    }
}
//释放
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        delete[] array[i][j];
    }
    delete[] array[i];
}
delete[] array;