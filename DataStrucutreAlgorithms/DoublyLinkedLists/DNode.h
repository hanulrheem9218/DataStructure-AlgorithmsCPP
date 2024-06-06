#pragma once
#include <iostream>
#include <string>

typedef std::string Elem;
struct DNode {
	Elem elem = "";
	DNode* prev = nullptr;
	DNode* next = nullptr;
};