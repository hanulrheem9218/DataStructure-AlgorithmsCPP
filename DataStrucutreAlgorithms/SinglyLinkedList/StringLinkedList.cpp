#include "StringLinkedList.h"
//constructor
StringLinkedList::StringLinkedList() : m_head(NULL) {};
//deconstructor
StringLinkedList::~StringLinkedList()
{
	while (!empty()) removeFront();
}

bool StringLinkedList::empty() const
{
	return m_head != NULL;
}

const std::string StringLinkedList::front() const
{
	return m_head->elem;
}

void StringLinkedList::addFront(const std::string& e)
{
	StringNode* v = new StringNode();
	v->elem = e; // store data
	v->next = m_head; // head now follows v
	m_head = v; // v is now the head 
}

void StringLinkedList::removeFront()
{
	StringNode* old = m_head;
	m_head = old->next;
	delete old;
}

void StringLinkedList::printNodes()
{
	if (empty()) {
		return;
	}
	while (m_head->next != NULL) {
		std::cout << m_head->elem << std::endl;
		m_head = m_head->next;
	}
}
