
#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;


struct Node {
	int key;
	Node* prev, * next;
};

void init(Node* nil) {
	nil->next = nil;
	nil->prev = nil;
}

void insert(int key, Node* nil) {
	Node *node = (Node *)malloc(sizeof(Node));
	node->key = key;
	node->next = nil->next;
	nil->next->prev = node;
	nil->next = node;
	node->prev = nil;
}

bool isNilOnly(Node* nil) {
	return (nil->next == nil);
}

Node* listSearch(int key, Node* nil) {
	Node* cur;
	cur = nil->next;
	while (cur != nil && cur->key != key) {
		cur = cur->next;
	}
	return cur;
}

void printList(Node* nil) {
	if (nil->next == nil) return;
	Node* cur;
	cur = nil->next;
	int isFirst = 0;
	while (cur != nil) {
		if(isFirst > 0) printf(" ");
		/*printf("%d", cur->key);*/
		cout << cur->key;
		cur = cur->next;
		isFirst++;
	}
}

void deleteNode(Node* t, Node* nil) {
	if (isNilOnly(nil)) return;
	t->next->prev = t->prev;
	t->prev->next = t->next;
	free(t);
}

void deleteFirst(Node *nil) {
	deleteNode(nil->next, nil);
}

void deleteLast(Node* nil) {
	deleteNode(nil->prev, nil);
}

void deleteNodeByKey(int key, Node* nil) {
	if (isNilOnly(nil)) return;
	deleteNode(listSearch(key, nil), nil);
}

void ALDS() {
	int key, n, i;
	int size = 0;
	char com[20];
	int np = 0, nd = 0;
	Node* nil = (Node*)malloc(sizeof(Node));

	scanf_s("%d", &n);
	
	init(nil);
	
	for (i = 0; i < n; i++) {
		cin >> com >> key;
		
		if (com[0] == 'i') {
			insert(key, nil); np++; size++;
		}
		else if(com[0] == 'd') {
			if (strlen(com) > 6) {
				if (com[6] == 'F') deleteFirst(nil);
				else if (com[6] == 'L') deleteLast(nil);
			}
			else {
				deleteNodeByKey(key, nil); nd++;
			}
			size--;
		}
	}
	printList(nil);
}

int main() {
	ALDS();
	return 0;
}

