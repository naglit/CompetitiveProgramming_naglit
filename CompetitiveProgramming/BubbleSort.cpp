// CompetitiveProgramming.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include <algorithm>
//#include <stdio.h>


using namespace std;

int bubbleSort(int N, int A[])
{
	bool flg = 1;
	int sw = 0;
	for (int i = 0; flg; i++)
	{
		flg = 0;
		for (int j = N - 1; j >= i; j--)
		{
			if (A[j] < A[j - 1]) {
				swap(A[j], A[j - 1]);
				flg = 1;
				sw++;
			}
		}
	}
	return sw;
}

int main_BubbleSort()
{
	int N, sw;
	int A[100];

	cin >> N;
	for (int i = 0; i < N; i++) cin >> A[i];
	sw = bubbleSort(N, A);

	for (int i = 0; i < N; i++) {
		if (i) cout << " ";
		cout << A[i];
	}

	cout << endl;
	cout << sw << endl;

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
