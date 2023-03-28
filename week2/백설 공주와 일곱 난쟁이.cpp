#include <iostream>
using namespace std;

int main()
{
	int n, m, k, num1 = 0, s = 0, M = 0;
	cin >> n >> m;

	char arr[51][51];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
			arr[i][j] -= 48;
		}
	}
	cin >> k;
	for (int i = 0; i < n; i++)
	{
		num1 = 0, s = 0;
		for (int j = 0; j < m; j++) 
		{
			num1 += arr[i][j]; 
		}
		if ((m - num1) <= k && (m - num1 - k) % 2 == 0)
		{
			for (int a = i; a < n; a++)
			{
				int c=0;
				for (int b = 0; b < m; b++)
				{
					if (arr[i][b] != arr[a][b]) { c++; }
				}
				if (c == 0) s++;
			}
		}
		M = (M > s) ? M : s;
	}
	cout << M;
}
