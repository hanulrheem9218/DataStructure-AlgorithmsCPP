#pragma once
#include "GenericCircularlyLinkedList.h"
#include "QueueEmpty.h"
template<typename Q>
class LinkedQueue
{
public:
	LinkedQueue();
	int size();
	bool empty() const;
	const Q& front() const throw(QueueEmpty);
	//const Q& front() const throw(QueueEmpty);
	void enqueue(const Q& value);
	void dequeue() throw(QueueEmpty);

	//print values
	void printAll();
private:
	int n;
	GenericCircularlyLinkedList<Q> linkedList;
	//add LinkedQueue 
	
};

template<typename Q>
inline LinkedQueue<Q>::LinkedQueue():n(0)
{
}

template<typename Q>
inline int LinkedQueue<Q>::size()
{
	return n;
}

template<typename Q>
inline bool LinkedQueue<Q>::empty() const
{
	return n == 0;
}

template<typename Q>
inline const Q& LinkedQueue<Q>::front() const throw(QueueEmpty)
{
	if (empty()) {
		throw QueueEmpty("empty list");
	}
	return linkedList.front();
	// TODO: insert return statement here
}

template<typename Q>
inline void LinkedQueue<Q>::enqueue(const Q& value)
{
	++n;
	linkedList.add(value);
	linkedList.advance();
}

template<typename Q>
inline void LinkedQueue<Q>::dequeue() throw(QueueEmpty)
{
	if (empty()) {
		throw QueueEmpty("Empty List");
	}
	--n;
	linkedList.remove();
}

template<typename Q>
inline void LinkedQueue<Q>::printAll()
{
	if (empty()) return;
	linkedList.printAll();
}
