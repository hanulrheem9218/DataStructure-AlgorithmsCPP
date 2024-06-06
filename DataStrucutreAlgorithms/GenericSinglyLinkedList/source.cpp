#include "SLinkedList.h"
#include <cstdlib>
int main()
{
	SLinkedList<int>* intList = new SLinkedList<int>();
	SLinkedList<std::string>* stringList = new SLinkedList<std::string>();

	int max = 10;
	for (int i = 0; i < max; i++) {
		intList->addFront(i);
	}
	
	for (int j = 0; j < max; j++) {
		stringList->addFront(std::to_string(j) + "F");
	}
//	std::cout << (int)'A' << std::endl;
	intList->printResults();
	stringList->printResults();
	return 0;
}
