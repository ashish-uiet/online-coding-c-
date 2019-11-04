#include<stdio.h>
#define SIZEN 100005
 
int A[SIZEN], U[SIZEN];
 
int main()
{
	int T;
	int N;
	int i, max;
	long long total;
	//freopen("input.txt", "r", stdin);
	A[0] = U[0] = 0;
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &N);
		for (i = 1; i <= N; i++)
			scanf("%d", &U[i]);
		for (i = 1; i <= N; i++)
			scanf("%d", &A[i]);
		total = 0;
		max = 0;
		for (i = 1; i <= N; i++) {
			if (U[i] == U[i - 1]) {
				if (A[i] > max)
					max = A[i];
			}
			else {
				total += max;
				max = A[i];
			}
		}
		total += max;
		printf("%lld\n", total);
	}
	return 0;
}
