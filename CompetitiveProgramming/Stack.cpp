// CompetitiveProgramming.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//using namespace std;

int top, S[1000];

void push(int x) {
	S[++top] = x;
}

int pop() {
	top--;
	return S[top + 1];
}

//int main()
//{
//	int a, b;
//	top = 0;
//	char s[100];
//
//	while (scanf_s("%s", s, 20) != EOF) {
//		if (s[0] == '+') {
//			a = pop();
//			b = pop();
//			push(a + b);
//		}
//		else if (s[0] == '-') {
//			a = pop();
//			b = pop();
//			push(a - b);
//		}
//		else if (s[0] == '*') {
//			a = pop();
//			b = pop();
//			push(a * b);
//		}
//		else {
//			push(atoi(s));
//		}
//	}
//	printf("%d\n", pop());
//	return 0;
//}
