#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int c = 0, k = 0;
	char ps[100001];
	char q[100001];
	scanf("%s", ps);
	for (int j = 0; j < strlen(ps); j++) {
		if (ps[j] == '(') c++;
		else if (ps[j] == ')') {
			c--;
			q[k++] = c;
		}
	}
	int a = q[0];
	for (int i = 1; i < k; i++) {
		if (q[i - 1] <= q[i]) a += q[i];
		else a++;
	}
	printf("%d", a);
}
