#include<bits/stdc++.h>
using namespace std;

bool pipeM(int n, int m, int a[], int h) {
	long long pieces = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] >= h) pieces += (a[i] - h);
	}
	return pieces >= m;
}
int FindMax(int n, int m, int a[]) {
	long long low = 0, high = 1e9, mid;
	while (high - low > 1) {
		mid = (high + low) / 2;
		if (pipeM(n, m, a, mid)) {
			low = mid;
		} else {
			high = mid - 1;
		}
	}
	if (pipeM(n, m, a, high))  return high;
	else if(pipeM(n, m, a, low)) return low;
	return -1;
}


