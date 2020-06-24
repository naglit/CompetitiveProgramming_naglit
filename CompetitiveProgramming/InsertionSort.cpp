// CompetitiveProgramming.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;
static const int MAX = 1000;

void trace(int A[], int N) {
	int i;

	for (i = 0; i < N; i++) {
		if (i > 0) printf(" ");
		printf("%d", A[i]);
	}

	printf("\n");
}

void insertionSort(int A[], int N) {
	//int A[MAX], N;
	//cin >> N;
	//for (int i = 0; i < N; i++) cin >> A[i];

	trace(A, N);

	for (int i = 1; i < N; i++) {
		int v = A[i];

		int j = i - 1;
		while (j >= 0 && A[j] > v) {
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = v;

		trace(A, N);
	}
}

int main_InsertionSort()
{
	int N, i, j;
	int A[100];

	scanf_s("%d", &N);
	for (i = 0; i < N; i++) scanf_s("%d", &A[i]);

	trace(A, N);
	insertionSort(A, N);
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
