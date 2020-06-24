
#include<iostream>

using namespace std;

int selectionSort(int N, int A[]) {
	int sw = 0;

	for (int i = 0; i < N; i++) {
		int minj = i;
		for (int j = i; j < N; j++) {
			if (A[minj] > A[j]) {
				minj = j;
			}
		}
		if (i != minj) {
			swap(A[i], A[minj]);
			sw++;
		}
	}
	return sw;
}
void runSelectionSort() {
	int A[100], N, i, sw;

	scanf_s("%d", &N);
	for (i = 0; i < N; i++) scanf_s("%d", &A[i]);
	sw = selectionSort(N, A);

	for (i = 0; i < N; i++) {
		if (i > 0) printf(" ");
		printf("%d", A[i]);
	}

	printf("\n");
	printf("%d\n", sw);
}