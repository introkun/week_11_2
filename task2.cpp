#include <iostream>

using namespace std;

void scan(int[10], int);
int sorting(int[10]);

int main()
{
	int arr[10]{ 8,5,25,32,65,85,12,56,23,7 }, key = 12;
	arr[10] = sorting(arr);
	scan(arr, key);
}

void scan(int arr[10], int key)
{
	int min=0, max=10, good;
	do
	{
		good = (min + max) / 2;
		if (arr[good] == key)
		{
			cout << arr[good] << " = " << good+1 << endl;
			return;
		}
		else if (key < arr[good])
		{
			max = good;
		}
		else if (key > arr[good])
		{
			min = good;
		}
	} while (1);
}

int sorting(int arr[10])
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 0; j < 10 - i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int l = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = l;
			}
		}
	}
	return arr[10];
}
