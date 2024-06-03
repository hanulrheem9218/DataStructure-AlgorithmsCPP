#pragma once
#include <iostream>
#include <cstdlib>
#include <string>

class StringNode {
private:
	std::string elem;
	StringNode* next;
	friend class StringLinkedList; // provide stringlinkedlist access to the public but u can use structure class to access any modifiers.
};
class StringLinkedList
{
public:
	StringLinkedList();
	~StringLinkedList();
	bool empty() const;
	const std::string front() const;
	void addFront(const std::string& e);
	void removeFront();

	//custom method
	void printNodes();
private:
	StringNode* head; // pointer to the head of list.
};

