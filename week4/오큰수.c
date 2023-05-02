#include <iostream>
#include <string>
#include <stack>

using namespace std;
int a[1000001];
int o[1000001];
stack<int> s;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = n - 1; i > -1; i--) {
		while (s.empty() == false && s.top() <= a[i]) s.pop();
		if (s.empty() == true) o[i] = -1;
		else o[i] = s.top();

		s.push(a[i]);
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", o[i]);
	}
}
