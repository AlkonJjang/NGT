#include <iostream>
using namespace std;

int main()
{
	int n, m, b, s, size = 1;
	cin >> n >> m;
	char arr[50][50] ;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	b = (n > m) ? n : m;
	s = (n < m) ? n : m;
	for (int i = 1; i < s + 1; i++)
	{
		for (int j = 0; j < n-i; j++)
		{
			for (int k = 0; k < m-i; k++)
			{
				if (arr[j][k] == arr[j + i][k] && arr[j][k] == arr[j][k + i] && arr[j][k] == arr[j + i][k + i])
				{
					size = (i + 1) * (i + 1);
				}
			}
		}
	}
	printf("%d", size);
}
