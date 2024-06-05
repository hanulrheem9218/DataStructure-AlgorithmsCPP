#include "CircularlyLinkedList.h"

CircularlyLinkedList::CircularlyLinkedList():m_cursor(NULL)
{
}

CircularlyLinkedList::~CircularlyLinkedList()
{
	while (!empty()) remove();
}

bool CircularlyLinkedList::empty() const
{
	return m_cursor == NULL;
}

const Elem& CircularlyLinkedList::front() const
{
	return m_cursor->element;
}

const Elem& CircularlyLinkedList::back() const
{
	return m_cursor->next->element;
	// TODO: insert return statement here
}

void CircularlyLinkedList::advance()
{
	m_cursor = m_cursor->next;
}

void CircularlyLinkedList::add(const Elem& e) // add after cursor
{
	CNode* node = new CNode; // initialize new node
	node->element = e;
	if (m_cursor == NULL) { //init  check if the list is empty
		node->next = node; // connects to itself
		m_cursor = node; // cursor point to v.
	}
	else { // if cursor is not NULL! add it to next cursor.
		node->next = m_cursor->next; // link in node after cursor.
		m_cursor->next = node;
	}
}

void CircularlyLinkedList::remove()
{
	CNode* old = m_cursor->next; //the node being removed
	if (old == m_cursor) m_cursor = NULL; //removing the only node? list is now empty
	else m_cursor->next = old->next; // linke out the old node
	delete old; // delete the old.
}

void CircularlyLinkedList::printAll()
{
	if (empty()) return;
	std::cout << "print node elements" << std::endl;
	CNode* node = m_cursor->next;
	while (node != m_cursor)
	{
		std::cout << node->element << std::endl;
		node = node->next;
	}

}
