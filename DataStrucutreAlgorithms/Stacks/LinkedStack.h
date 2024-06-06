#pragma once
#include "SLinkedList.h"
#include <vector>
typedef std::string Elden;

class LinkedStack
{
public:
	LinkedStack();
	int size() const;
	bool empty() const;
	void push(const Elden& e);
	void pop();
	const Elden& top() const;

	
private:
	SLinkedList<Elden> sLinkedList;
	int n;
};

