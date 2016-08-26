#include <iostream>

using namespace std;

void scan(int[10], int);

int main() 
{
	int arr[10]{ 8,5,25,32,65,85,12,56,23,7 }, key = 12;
	scan(arr, key);
}

void scan(int arr[10], int key)
{
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == key)
		{
			cout << arr[i] << " = " << i << endl;
			return;
		}
	}
}
