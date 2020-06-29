// CompetitiveProgramming.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include <algorithm>
//#include <stdio.h>
#include <vector>

using namespace std;

long long cnt;
int l;
int A[1000000];
int n;
vector<int> G;


void insertionSort(int A[], int n, int g) {

	for (int i = g; i < n; i++) {
		int v = A[i];
		int j = i - g;
		while ((j > -1) && (A[j] > v)) {
			A[j + g] = A[j];
			j -= g;
			cnt++;
		}
		A[j + g] = v;
	}
}

void shellSort(int A[], int n) {
	for (int h = 1; ;) {
		if (h > n) break;
		G.push_back(h);
		h = 3 * h + 1;
	}
	for (int i = G.size() - 1; i > -1; i--) {
		insertionSort(A, n, G[i]);
	}
}

//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++) scanf_s("%d", &A[i]);
//	cnt = 0;
//
//	shellSort(A, n);
//
//	cout << G.size() << endl;
//	for (int i = G.size() - 1; i > -1; i--) {
//		printf("%d", G[i]);
//		if (i) printf(" ");
//	}
//
//	printf("\n");
//	printf("%d\n", cnt);
//	for (int i = 0; i < n; i++) printf("%d\n", A[i]);
//	return 0;
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
