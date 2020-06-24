// CompetitiveProgramming.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include <algorithm>
//#include <stdio.h>

using namespace std;

struct Card { char suit, value; };

void bubble(struct Card A[], int N) {
	for (int i = 0; i < N; i++) {
		for (int j = N - 1; j >= 1; j--) {
			if (A[j].value < A[j - 1].value) {
				Card t = A[j]; A[j] = A[j - 1]; A[j - 1] = t;
			}
		}
	}
}

void selection(struct Card A[], int N) {
	for (int i = 0; i < N; i++) {
		int minj = i;
		for (int j = i; j < N; j++) {
			if (A[j].value < A[minj].value) {
				minj = j;
			}
		}
		Card t = A[i]; A[i] = A[minj]; A[minj] = t;
	}
}

void print(struct Card A[], int N) {
	for (int i = 0; i < N; i++) {
		if (i > 0) cout << " ";
		cout << A[i].suit << A[i].value;
	}
	cout << endl;
}

bool isStable(struct Card C1[], struct Card C2[], int N) {
	for (int i = 0; i < N; i++) {
		if (C1[i].suit != C2[i].suit) return false;
	}
	return true;
}

//int main()
//{
//	Card C1[100], C2[100];
//	int N;
//	char ch;
//
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> C1[i].suit >> C1[i].value;
//	}
//
//	for (int i = 0; i < N; i++) C2[i] = C1[i];
//
//	bubble(C1, N);
//	selection(C2, N);
//
//	print(C1, N);
//	cout << "Stable" << endl;
//	print(C2, N);
//	if (isStable(C1, C2, N)) {
//		cout << "Stable";
//	}
//	else
//	{
//		cout << "Not stable" << endl;
//	}
//
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
