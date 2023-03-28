//런타임오류 (out of bound) 멘토 질문!!!
#include <iostream>
using namespace std;

int main()
{
	int n, M = 0, mul = 0, temp = 0;
	cin >> n;
	short arr[101];
	char dig[8] = {};
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			mul = 0;
			temp = arr[i] * arr[j];
			for (int j = 0; j < 7; j++)
			{
				dig[j] = temp - (temp / 10) * 10;
				temp = temp / 10;
			}
			for (int j = 0; j < 7; j++) mul += dig[j];
			M = (M > mul) ? M : mul;
		}
	}
	cout << M << '\n';

}
