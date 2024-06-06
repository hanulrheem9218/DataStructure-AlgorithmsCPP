#pragma once
#include <stdexcept>
#include <iostream>
#include "RuntimeException.h"

template <typename E>
struct SNode {
	E elem;
	SNode<E>* next;
};

template<typename E>
class Stack
{
public:
	bool empty() const;
	int size() const;
	const E& top() const throw(StackEmpty);
	void push(const E& e);
	void pop() throw(StackEmpty);
};

template<typename E>
inline bool Stack<E>::empty() const
{
	return false;
}

template<typename E>
inline int Stack<E>::size() const
{
	return 0;
}

template<typename E>
inline const E& Stack<E>::top() const throw(StackEmpty)
{
	// TODO: insert return statement here
}

template<typename E>
inline void Stack<E>::push(const E& e)
{
}

template<typename E>
inline void Stack<E>::pop() throw(StackEmpty)
{
}
