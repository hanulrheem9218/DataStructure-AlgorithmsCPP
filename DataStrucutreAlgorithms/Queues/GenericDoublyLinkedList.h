#pragma once
#include <iostream>
#include <string>
template<typename D>
struct DNode {
	D value;
	DNode<D>* next;
	DNode<D>* prev;
};

template<typename D>
class GenericDoublyLinkedList
{
public:
	GenericDoublyLinkedList();
	~GenericDoublyLinkedList();
	void addFront(const D& value);
	void addBack(const D& value);
	const D& front() const;
	const D& back() const;
	void removeFront();
	void removeBack();
	bool empty() const;

	void printAll();
private:
	void add(DNode<D>* node, const D& value);
	void remove(DNode<D>* node);
	DNode<D>* m_header;
	DNode<D>* m_trailer;
};

template<typename D>
inline void GenericDoublyLinkedList<D>::add(DNode<D>* node, const D& value)
{
	DNode<D>* newNode = new DNode<D>();
	newNode->value = value;
	newNode->next = node;
	newNode->prev = node->prev;
	node->prev->next = newNode;
	node->prev = newNode;
}

template<typename D>
inline void GenericDoublyLinkedList<D>::remove(DNode<D>* node)
{
	DNode<D>* next = node->next;
	DNode<D>* prev = node->prev;
	next->prev = prev;
	prev->next = next;
	delete node;
}

template<typename D>
inline GenericDoublyLinkedList<D>::GenericDoublyLinkedList()
{
	m_header = new DNode<D>();
	m_trailer = new DNode<D>();
	m_header->next = m_trailer;
	m_trailer->prev = m_header;
}

template<typename D>
inline GenericDoublyLinkedList<D>::~GenericDoublyLinkedList()
{
	while (!empty()) removeFront();
	delete m_header;
	delete m_trailer;
}

template<typename D>
inline void GenericDoublyLinkedList<D>::addFront(const D& value)
{
	add(m_header->next, value);
}

template<typename D>
inline void GenericDoublyLinkedList<D>::addBack(const D& value)
{
	add(m_trailer, value);
}

template<typename D>
inline const D& GenericDoublyLinkedList<D>::front() const
{
	return m_header->next->value;
	// TODO: insert return statement here
}

template<typename D>
inline const D& GenericDoublyLinkedList<D>::back() const
{
	return m_trailer->next->value;
	// TODO: insert return statement here
}

template<typename D>
inline void GenericDoublyLinkedList<D>::removeFront()
{
	remove(m_header->next);
}

template<typename D>
inline void GenericDoublyLinkedList<D>::removeBack()
{
	remove(m_trailer->prev);
}

template<typename D>
inline bool GenericDoublyLinkedList<D>::empty() const
{
	return m_header->next == m_trailer;
}

template<typename D>
inline void GenericDoublyLinkedList<D>::printAll()
{
	if (empty()) return;
	DNode<D>* current = m_header->next;
	while (current != m_trailer) {
		std::cout << current->value << std::endl;
		current = current->next;
	}
}
