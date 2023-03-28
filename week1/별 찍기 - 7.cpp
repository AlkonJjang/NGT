#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int N;
	cin >> N;
	int j = 0;
	for (int i = 1; i < 2*N; i++)
	{
		int k = N - abs(N - i);
		for (j = 0; j < N - k; j++) { printf(" "); }
		for (j = 0; j < 2*k - 1; j++) { printf("*"); }
		for (j = 0; j < N - k; j++) { printf(" "); }
		printf("\n");
	}
}
