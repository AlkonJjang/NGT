#include <iostream>
using namespace std;

int main()
{
	int sum = 0, i, j;
	int arr[9];

	for (i = 0; i < 9; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			if ((sum - arr[i] - arr[j]) == 100)
			{
				for (int a = 0; a < 9; a++)
				{
					if (a != i && a != j)
						cout << arr[a] << '\n';
				}
				return 0;
			}
		}
	}
}
