#pragma once
#include "DNode.h"
class DoublyLinkedList
{
public:
	DoublyLinkedList();
	~DoublyLinkedList();
	bool empty() const;
	//front
	const Elem& front() const;
	const Elem& back() const;
	//remove
	void removeFront();
	void removeBack();
	//add
	void addFront(const Elem& e);
	void addBack(const Elem& e);
	//custom print method
	void printResult();

	void listReserve(DoublyLinkedList& l);
private:
	DNode* m_header;
	DNode* m_trailer;
	
protected:
	void add(DNode* v, const Elem& e);
	void remove(DNode* v);
};

