#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int n, c, l;
	char ps[51];
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%s", ps);
		c = 0;
		for (int j = 0; j < strlen(ps); j++) {
			if (ps[j] == '(') c++;
			else if (ps[j] == ')') c--;

			if (c < 0) break;
		}
		if (c != 0) printf("NO\n");
		else printf("YES\n");
	}
}
