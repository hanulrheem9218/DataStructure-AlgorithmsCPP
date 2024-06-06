#include "StringLinkedList.h"
//constructor
StringLinkedList::StringLinkedList() : head(NULL) {};
//deconstructor
StringLinkedList::~StringLinkedList()
{
	while (!empty()) removeFront();
}

bool StringLinkedList::empty() const
{
	return head != NULL;
}

const std::string StringLinkedList::front() const
{
	return head->elem;
}

void StringLinkedList::addFront(const std::string& e)
{
	StringNode* v = new StringNode();
	v->elem = e; // store data
	v->next = head; // head now follows v
	head = v; // v is now the head 
}

void StringLinkedList::removeFront()
{
	StringNode* old = head;
	if (old->next != NULL) {
		head = old->next;
		std::cout << head->elem << std::endl;
		delete old;
	}
	else {
		delete head;
	}
}

void StringLinkedList::printNodes()
{
	if (empty()) {
		return;
	}
	while (head->next != NULL) {
		std::cout << head->elem << std::endl;
		head = head->next;
	}
}
