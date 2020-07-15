#include<iostream>
#include<algorithm>
using namespace std;

int search(int S[], int n, int key) {
	int i = 0;
	S[n] = key;
	while (S[i] != key) i++;
	return (i != n);
}

void ALDS() {
	int n, S[10000+1], q, key, sum;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> S[i];
	
	sum = 0;
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> key;
		if (search(S, n, key)) {
			//cout << i;
			sum++;
		}
	}
	cout << sum;
}

int main() {
	ALDS();
	return 0;
}

