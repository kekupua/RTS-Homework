#ifndef DOUBLY_H
#define DOUBLY_H
#include "basicAccount.h"
struct DLink {	//doubly linked node
	basicAccount b;
	DLink* prev;
	DLink* next;
	DLink(basicAccount* bank):b(*bank), prev(NULL), next(NULL){}
	DLink(basicAccount bank, DLink* p = 0, DLink* n = 0)
		:b(bank), prev(p), next(n) {}
};

class DoublyLinkedList {
public:
	DoublyLinkedList(){ head = NULL; tail = NULL; }
	bool addB(DLink* p); // Add bank link
	void findB(string name);
	void findB(long int id);

	void insert(DLink* n, DLink* p); // Insert element n before p
	void add(DLink* p, DLink* n); // Insert element n after p
	void erase(DLink* p); // delete element p
	DLink* find(string s); // find value s in list, return node pointer
	DLink* advance(int n); // advance to nth element, return node pointer
	void append(DLink *p); // append node to end of list
	void print_all(DLink* head); // print all nodes, given head

	DLink* getHead() { return head; }
	DLink* setHead(DLink *p) { head = p; }

private:
	DLink* head;
	DLink* tail; int size;  //one or the other is sufficient
};
#endif
