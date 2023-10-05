#include <bits/stdc++.h>
using namespace std;

void insertion(int *arr, int size)
{
	for (int i = 1; i < size; i++)
	{
		int temp = arr[i];
		int j = i - 1;
		for (; j >= 0; j--)
		{
			if (arr[j] > temp)
			{
				arr[j + 1] = arr[j];
			}
			else
			{
				break;
			}
		}
		arr[j + 1] = temp;
	}
}


int main()
{
	int arr[6] = {5, 4, 3, 7, 1, 2};
	int size = 6;
	insertion(arr, size);
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
