#include <iostream>
using namespace std;

int main() 
{
	int n, c, t = -1;

	cin >> n >> c;

	int arr[100];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i <= c; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i % arr[j] == 0)
			{
				t++;
				break;
			}
		}
	}
	cout << t << endl;
}
