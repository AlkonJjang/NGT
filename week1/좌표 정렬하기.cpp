#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N, a, b;
	cin >> N;
	typedef pair<int, int> pr;
	vector<pr> pt;
	for (int i = 0; i < N; i++)
	{
		cin >> a >> b;
		pt.push_back(make_pair(a, b));
	}
	sort(pt.begin(), pt.end());
	for (auto i : pt)
	{
		cout << i.first << " " << i.second << "\n";
	}
}
