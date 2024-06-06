#pragma once
#include <iostream>
#include <string>
typedef std::string Elem;
struct CNode {
	Elem element;
	CNode* next;
};
class CircularlyLinkedList
{
public:
	CircularlyLinkedList();
	~CircularlyLinkedList();
	bool empty() const;
	const Elem& front() const;
	const Elem& back() const;
	void advance();
	void add(const Elem& e);
	void remove();

	//print statemnet
	void printAll();
private:
	CNode* m_cursor;
};

