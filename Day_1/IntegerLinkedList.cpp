// ADD ANSWER TO THIS FILE

#include "IntegerLinkedList.h"

// int IntegerLinkedList::getSum(); // COMPLETE THIS FOR PROBLEM 2

int IntegerLinkedList::getSumRecurse (SNode *ptr) {
  return -1; // COMPLETE THIS FOR PROBLEM 3
}

void IntegerLinkedList::addFront(int x) {
  SNode *tmp = head;
	head = new SNode;
	head->next = tmp;
	head->elem = x;
}

// recursion helper function called from main for PROBLEM 3
int IntegerLinkedList::getSumRecurseHelper () {
  return getSumRecurse(head);
}
