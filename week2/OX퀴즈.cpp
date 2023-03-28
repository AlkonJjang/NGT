#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n ;
	for (int i = 0; i < n; i++)
	{
		char arr[80] = {};
		cin >> arr;
		int g = 0, s = 0;
		for (int j = 0; j < 80; j++)
		{
			if (arr[j] == 'O')
			{
				g += ++s;
			}
			else
			{
				s = 0;
			}
		}
		cout << g << '\n';
	}
}
