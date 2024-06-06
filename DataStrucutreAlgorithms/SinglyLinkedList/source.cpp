#include "StringLinkedList.h"
#include <iostream>

int main()
{
    StringLinkedList* singleLinkedList = new StringLinkedList();
    singleLinkedList->addFront("Whats up!");
    singleLinkedList->addFront("wow What the fk!");
    singleLinkedList->addFront("mean!!");
    singleLinkedList->addFront("David!");

    singleLinkedList->removeFront();
    singleLinkedList->removeFront();
    singleLinkedList->removeFront();
    singleLinkedList->removeFront();
    singleLinkedList->printNodes();
  //  std::cout << "Hello World!\n";
}

