#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, ans = 0 ;
	int oto=0;
	int lto=0;
	int otl=0;
	int ltl=0;
	cin >> n;
	char arr[10][100] = {};
	char hnt[10][3] = {};
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		hnt[i][0] = arr[i][0];
		for (int j = 0; j < 100; j++)
		{
			if (arr[i][j] != arr[i][j + 1])
				if (arr[i][j + 1] == '\n' || arr[i][j + 1] == '\0')
				{
					hnt[i][1] = arr[i][j];
					break;
				}
				else	ans++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (hnt[i][0] == '0'&& hnt[i][1] == '0') oto++;
		else if (hnt[i][0] == '1' && hnt[i][1] == '0') lto++;
		else if (hnt[i][0] == '0' && hnt[i][1] == '1') otl++;
		else if (hnt[i][0] == '1' && hnt[i][1] == '1') ltl++;
	}
	if (lto == 0 && otl == 0) 
		if(ltl != 0 && oto != 0) ans++;
	else ans += abs(lto - otl);
	cout << ans;
}
