#include "DoublyLinkedList.h"

DoublyLinkedList::DoublyLinkedList()
{
	m_header = new DNode();	//create sentinels
	m_trailer = new DNode();
	m_header->next = m_trailer; // have them point to each other
	m_trailer->prev = m_header;
}

DoublyLinkedList::~DoublyLinkedList()
{
	while (!empty()) removeFront();
	delete m_header;
	delete m_trailer;
}

bool DoublyLinkedList::empty() const
{
	return (m_header->next == m_trailer);
}

const Elem& DoublyLinkedList::front() const
{
	
	return m_header->next->elem;
}

const Elem& DoublyLinkedList::back() const
{
	return m_trailer->prev->elem;
}

void DoublyLinkedList::removeFront()
{
	remove(m_header->next);
}

void DoublyLinkedList::removeBack()
{
	remove(m_trailer->prev);
}

void DoublyLinkedList::addFront(const Elem& e)
{
	add(m_header->next, e);
}

void DoublyLinkedList::addBack(const Elem& e)
{
	add(m_trailer, e);
}

void DoublyLinkedList::printResult()
{
	if (empty()) return;

	DNode* node = m_header->next;
	//std::cout << &m_header->elem << " + " << &front() << std::endl;
	while (node != m_trailer) {
		std::cout << node->elem << std::endl;
		node = node->next;
	}
}

void DoublyLinkedList::listReserve(DoublyLinkedList& l)
{
	DoublyLinkedList t;
	while (!l.empty()) {
		Elem s = l.front();
		l.removeFront();
		t.addFront(s);
	}
	while (!t.empty()) {
		Elem s = t.front();
		t.removeFront();
		l.addBack(s);
	}
}

void DoublyLinkedList::add(DNode* v, const Elem& e)
{
	DNode* u = new DNode;
	//setting U Dnode
	u->elem = e; // create a new node for e
	u->next = v; //link u in between v.
	u->prev = v->prev; // and v->prev; 
	// setting V address
	v->prev->next = u;
	v->prev = u;
}

void DoublyLinkedList::remove(DNode* v)
{
	DNode* u = v->prev; //register existing v node.
	DNode* w = v->next; //register existing v node.
	u->next = w;
	w->prev = u;
	delete v;
}



