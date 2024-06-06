#pragma once
#include <iostream>
#include <vector>
#include "RuntimeException.h"
template<typename E>
class ArrayStack
{
	enum { DEF_CAPACITY = 100 };
public:
	ArrayStack(int cap = DEF_CAPACITY);
	int size() const;
	bool empty() const;
	const E& top() const;
	void push(const E& e);
	void pop();

	void reverse(std::vector<E>& v);
private:
	E* S;
	int capacity;
	int t;
};


template<typename E>
inline ArrayStack<E>::ArrayStack(int cap):S(new E[cap]), capacity(cap), t(-1)
{
}

template<typename E>
inline int ArrayStack<E>::size() const
{
	return (t + 1);
}

template<typename E>
inline bool ArrayStack<E>::empty() const
{
	return (t < 0);
}

template<typename E>
inline const E& ArrayStack<E>::top() const
{
	if (empty()) {
		std::cout << "Top of empty Stack";
		return NULL;
	}
	return S[t];
	// TODO: insert return statement here
}

template<typename E>
inline void ArrayStack<E>::push(const E& e)
{
	if (size() == capacity) {
		std::cout << " stack is full";
		return;
	}
	S[++t] = e;
}

template<typename E>
inline void ArrayStack<E>::pop()
{
	if (empty()) {
		std::cout << "pop from empty stack";
		return;
	}
	--t;
}

template<typename E>
inline void ArrayStack<E>::reverse(std::vector<E>& v)
{
	ArrayStack<E> s(v.size());
	for (int i = 0; i < v.size(); i++) {
		s.push(v[i]);
	}
	for (int j = 0; j < v.size(); j++)
	{
		v[j] = s.top(); 
		s.pop();
	}

	for (int l = 0; l < v.size(); l++) {
		std::cout << v[l] << std::endl;
	}
}

