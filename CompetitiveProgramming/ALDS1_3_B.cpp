#include <stdio.h>
#include<string.h>
#include <iostream>
using namespace std;
#define LEN 100005



struct pp {
	char name[100];
	int t;
};

pp Q[LEN];
int head, tail, n;
void enqueue(pp x) {
	Q[tail] = x;
	tail = (tail + 1) % LEN;
}

pp dequeue() {
	pp x = Q[head];
	head = (head + 1) % LEN;
	return x;
}

int min(int a, int b) { return (a < b) ? a : b; }

int main() {
	int elaps = 0, c;
	int q;

	cin >> n >> q;
	pp u;
	for (int i = 0; i < n; i++) {
		cin >> Q[i].name >> Q[i].t;
	}
	head = 0;
	tail = n;

	while (head != tail) {
		u = dequeue();
		c = min(u.t, q);
		u.t = u.t - c;
		elaps += c;
		if (u.t > 0) {
			enqueue(u);
		}
		else {
			cout << u.name << " " << elaps << endl;
		}
	}

	return 0;
}