#include <iostream>
using namespace std;

int main()
{
	int i, j, k = 0;
	cin >> i;
	j = i;

	do
	{
		j = (j % 10) * 10 + (j / 10 + j % 10) % 10;
		k++;
	} while (i != j);
	cout << k << "\n";
}

/*
12계열 60개
24계열 20개
21계열 12개
26계열 04개
50계열 03개
00계열 01개
토탈  100개
*/
