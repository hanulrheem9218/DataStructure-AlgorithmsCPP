#pragma once
#include <iostream>
#include <string>

template<typename N>
class GNode {
public:
	N value;
	GNode<N>* next;
private:
	friend class GenericCircularlyLinkedlist;
};

template<typename  N>
class GenericCircularlyLinkedList
{
public:
	GenericCircularlyLinkedList();
	~GenericCircularlyLinkedList();
	void add(const  N& value);
	bool empty() const;
	void remove();
	const  N& front() const;
	const  N& back() const;
	void advance();

	void printAll();
private:
	GNode<N>* m_cursor;
};

template<typename N>
inline GenericCircularlyLinkedList<N>::GenericCircularlyLinkedList() : m_cursor(NULL)
{
};

template<typename N>
inline GenericCircularlyLinkedList<N>::~GenericCircularlyLinkedList()
{
	while (!empty()) remove();
};

template<typename N>
inline void GenericCircularlyLinkedList<N>::add(const N& value)
{
	GNode<N>* current = new GNode<N>();
	current->value = value;
	if (m_cursor == NULL) {
		current->next = current;
		m_cursor = current;
	}
	else { // if next
		current->next = m_cursor->next;
		m_cursor->next = current;
	}
};

template<typename N>
inline bool GenericCircularlyLinkedList<N>::empty() const
{
	return m_cursor == NULL;
};

template<typename N>
inline void GenericCircularlyLinkedList<N>::remove()
{
	GNode<N>* old = m_cursor->next;
	if (old == m_cursor) {
		m_cursor = NULL;
	}
	else {
		m_cursor->next = old->next;
	}
	delete old;
};

template<typename N>
inline const N& GenericCircularlyLinkedList<N>::front() const
{
	return m_cursor->value;
	// TODO: insert return statement here
};

template<typename N>
inline const N& GenericCircularlyLinkedList<N>::back() const
{
	return m_cursor->next->value;
	// TODO: insert return statement here
};

template<typename N>
inline void GenericCircularlyLinkedList<N>::advance()
{
	m_cursor = m_cursor->next;
};

template<typename N>
inline void GenericCircularlyLinkedList<N>::printAll()
{
	if (empty()) return;
	GNode<N>* current = m_cursor->next;
	std::cout << m_cursor->value << std::endl;
	while (current != m_cursor) {
		std::cout << current->value << std::endl;
		current = current->next;
	}
};
