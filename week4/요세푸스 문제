#include <iostream>
#include <string>
#include <queue>
using namespace std;
queue<int> q;

int main() 
{
	int n, k;
	cin >> n;
	cin >> k;
	for (int i = 1; i < n + 1; i++) {
		q.push(i);
	}
	printf("<");
	while (!q.empty()) {
		for (int i = 0; i < k - 1; i++) {
			q.push(q.front()); 
			q.pop();
		}
		printf("%d, ", q.front());
		q.pop();
	}
	printf("\b\b>");
}
