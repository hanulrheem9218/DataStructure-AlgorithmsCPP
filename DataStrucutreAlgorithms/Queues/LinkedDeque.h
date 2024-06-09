#pragma once
#include "GenericDoublyLinkedList.h"
#include "QueueEmpty.h"

template<typename Q>
class LinkedDeque
{
public:
	LinkedDeque();
	void insertFront(const Q& elem);
	void insertBack(const Q& elem);
	int size() const;
	bool empty() const;
	void eraseFront();
	void eraseBack();
	const Q& front() const;
	const Q& back() const;
	
	void printAll();
private:
	int n;
	GenericDoublyLinkedList<Q> linkedList;
	//implement circulary LinkedList
};

template<typename Q>
inline LinkedDeque<Q>::LinkedDeque():n(0), linkedList()
{
}

template<typename Q>
inline void LinkedDeque<Q>::insertFront(const Q& elem)
{
	++n;
	linkedList.addFront(elem);
}

template<typename Q>
inline void LinkedDeque<Q>::insertBack(const Q& elem)
{
	++n;
	linkedList.addBack(elem);
}

template<typename Q>
inline int LinkedDeque<Q>::size() const
{
	return n;
}

template<typename Q>
inline bool LinkedDeque<Q>::empty() const
{
	return n == 0;
}

template<typename Q>
inline void LinkedDeque<Q>::eraseFront()
{
	--n;
	linkedList.removeFront();
}

template<typename Q>
inline void LinkedDeque<Q>::eraseBack()
{
	--n;
	linkedList.removeBack();
}

template<typename Q>
inline const Q& LinkedDeque<Q>::front() const
{
	return linkedList.front();
	// TODO: insert return statement here
}

template<typename Q>
inline const Q& LinkedDeque<Q>::back() const
{
	return linkedList.back();
	// TODO: insert return statement here
}

template<typename Q>
inline void LinkedDeque<Q>::printAll()
{
	linkedList.printAll();
}
