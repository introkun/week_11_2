#include <iostream>

using namespace std;

void binare(int);

int main()
{
	int number;
	cout << "in number to binare ";
	cin >> number;
	binare(number);
}

void binare(int number)
{
	double long tens = 1;
	double long binar = 0;
	while (10)
	{
		binar += (number % 2)*tens;
		number /= 2;
		if (number == 0)
		{
			cout << binar << endl;
			return;
		}
		tens *= 10;
	}
}
