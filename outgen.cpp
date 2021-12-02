#include<bits/stdc++.h>
#include "a1.cpp"
using namespace std;


void generateOutputs() {
	int n, m;
	cin >> n >> m;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	cout << FindMax(n, m, a);
}

int main() {
	const char* inp[] = {"input1.txt", "input2.txt", "input3.txt", "input5.txt", "input6.txt", "input7.txt", "input8.txt", "input9.txt", "input10.txt", "input11.txt", "input12.txt"};
	const char* outp[] = {"output1.txt", "output2.txt", "output3.txt", "output5.txt", "output6.txt", "output7.txt", "output8.txt", "output9.txt", "output10.txt", "output11.txt", "output12.txt"};
	for (int i = 0; i < 12; i++) {
		freopen(inp[i], "r", stdin);
		freopen(outp[i], "w", stdout);
		generateOutputs();
	}
	return 0;
}
