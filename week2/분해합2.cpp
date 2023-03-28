#include <iostream>
#include <string>

using namespace std;

int main()
{
	long long n = 0, m = 0;
	int sum = 0, t = 0;
	char dig[19] = {};
	cin >> n;
	for (int i = 153; i > 0; i--)
	{
		sum = 0;
		m = n - i;
		for (int j = 0; j < 19; j++)
		{
			dig[j] = m - (m / 10) * 10;
			m = m / 10;
		}
		for (int j = 0; j < 19; j++) sum += dig[j];
		if (sum == i)
		{
			t = 1;
			m = n - i;
			break;
		}
	}
	if (t == 1) cout << m << '\n';
	else cout << '0' << '\n';
}
