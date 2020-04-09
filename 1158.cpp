#include <iostream>
#include <stdio.h>

class Node {
public:
	Node *nextNode = nullptr;

	int data;
};

int main(void) {
	int N, K;
	Node *head = new Node();

	scanf_s("%d %d", &N, &K);

	head->data = 0;
	head->nextNode = nullptr;

	for (int i = 0; i < N; i++) {
		if(i != N - 1) {
			Node *currentNode = new Node();

			currentNode->data = i + 1;
			currentNode->nextNode = nullptr;

			Node *tempNode = head;

			while (tempNode->nextNode != nullptr) {
				tempNode = tempNode->nextNode;
			}

			tempNode->nextNode = currentNode;
		}
		else {
			Node *currentNode = new Node();

			currentNode->data = i + 1;
			currentNode->nextNode = head;

			Node *tempNode = head;

			while (tempNode->nextNode != nullptr) {
				tempNode = tempNode->nextNode;
			}

			tempNode->nextNode = currentNode;
		}
	}

	printf("<");

	for (int i = 0; i < N; i++) {
		Node *tempNode = head;
		Node *deleteNode;

		for (int i = K; i > 0;) {
			tempNode = tempNode->nextNode;
			if (tempNode->data != 0) {
				i--;
			}
		}

		deleteNode = tempNode;
		head = tempNode;

		if (i != N - 1) printf("%d, ", deleteNode->data);
		else printf("%d", deleteNode->data);

		deleteNode->data = 0;
	}

	printf(">");

	return 0;
}