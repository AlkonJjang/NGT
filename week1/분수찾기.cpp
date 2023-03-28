#include <iostream>
using namespace std;

int main()
{
	int j;
	cin >> j;
	int i = 0;
	for (;; i++)
	{
		j -= i;
		if (j <= 0) break;
	}
	if (i % 2 != 0)
		cout << 1 - j << "/" << i + j << "\n";
	else
		cout << i + j << "/" << 1 - j << "\n";
}
