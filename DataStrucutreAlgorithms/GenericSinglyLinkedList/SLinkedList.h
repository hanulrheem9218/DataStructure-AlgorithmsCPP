#pragma once
#include <iostream>
#include <string>
#include <cstdlib>

template <typename E>
struct SNode {
	E elem;
	SNode<E>* next;
};
//if it uses template it must be in the same class. 
template <typename E> 
class SLinkedList
{
public: 
	SLinkedList();
	~SLinkedList();
	bool empty() const;
	const E& front() const;
	void addFront(const E& e);
	void removeFront();
	//custom methods
	void printResults();
private:
	SNode<E>* p_head;
};

template<typename E>
SLinkedList<E>::SLinkedList() : p_head(NULL) {
}

template<typename E>
SLinkedList<E>::~SLinkedList()
{
	while (empty()) {
		removeFront();
	}
}

template<typename E>
bool SLinkedList<E>::empty() const
{
	return p_head == NULL;
}

template<typename E>
const E& SLinkedList<E>::front() const
{
	return p_head->elem;
}

template<typename E>
void SLinkedList<E>::addFront(const E& e)
{
	SNode<E>* node = new SNode<E>;
	node->elem = e;
	node->next = p_head;
	p_head = node;
}

template<typename E>
inline void SLinkedList<E>::removeFront()
{
	SNode<E>* old = p_head;
	p_head = old->next;
	delete old;
}

template<typename E>
inline void SLinkedList<E>::printResults()
{
	if (empty()) return;
	while (p_head->next != NULL) {
		SNode<E>* curr = p_head;
		std::cout << curr->elem << std::endl;
		p_head = curr->next;
	}
}
