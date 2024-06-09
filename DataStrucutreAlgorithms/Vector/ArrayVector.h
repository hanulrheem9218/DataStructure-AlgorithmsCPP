#pragma once
#include <iostream>
typedef int Elem;
class ArrayVector
{
public:
	ArrayVector();
	int size() const;
	bool empty() const;
	Elem& operator[](int i); // not safe.
	Elem& at(int i) throw ();// element at index; this is safe.
	void erase(int i);
	void insert(int i, const Elem& e);
	void reverse(int N); 
	//other functions are omitted.
private:
	int capacity;
	int n;
	Elem* a;
};

