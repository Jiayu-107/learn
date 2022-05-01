#define _CRT_SECURE_NO_WARNINGS 1
int judge_ReversedNumTwo(int num)
{
	int arr[5];
	int index = 0, left = 0, right = 4;

	while (index < 5)
	{
		arr[index] = num % 10;
		index++;
		num /= 10;
	}

	while (left < right)
	{
		if (arr[left] != arr[right])
		{
			return 0;
		}
		left++;
		right--;
	}

	return 1;
}
