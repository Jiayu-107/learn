#define _CRT_SECURE_NO_WARNINGS 1

int*** array;
// �ٶ������һάΪ m�� �ڶ�άΪ n�� ����άΪh
// ��̬����ռ�
array = new int** [m];
for (int i = 0; i < m; i++)
{
    array[i] = new int* [n];
    for (int j = 0; j < n; j++)
    {
        array[i][j] = new int[h];
    }
}
//�ͷ�
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        delete[] array[i][j];
    }
    delete[] array[i];
}
delete[] array;