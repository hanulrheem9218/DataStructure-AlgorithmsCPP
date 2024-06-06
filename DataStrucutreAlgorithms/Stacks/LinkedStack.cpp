#include "LinkedStack.h"

LinkedStack::LinkedStack():sLinkedList(),n(0)
{
}

int LinkedStack::size() const
{
	return n;
}

bool LinkedStack::empty() const
{
	return n == 0;
}

void LinkedStack::push(const Elden& e)
{
	n++;
	sLinkedList.addFront(e);
}

void LinkedStack::pop()
{
	if (empty()) {
		std::cout << "stack is empty";
		return;
	}
	n--;
	sLinkedList.removeFront();
}

const Elden& LinkedStack::top() const
{
	if (empty()) {
		std::cout << "stack is empty";
		return NULL;
	}
	return sLinkedList.front();
	// TODO: insert return statement here
}
