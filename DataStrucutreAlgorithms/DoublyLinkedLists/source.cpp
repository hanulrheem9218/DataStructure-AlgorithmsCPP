#include "DoublyLinkedList.h"
#include <iostream>
int main()
{
    DoublyLinkedList linkedList;
    linkedList.addFront("sup");
    linkedList.addFront("sup");
    linkedList.addBack("sup1");
   //for (int i = 0; i < 9; i++) {
   //    linkedList.addFront(std::to_string(i));
   //}
    std::cout << linkedList.empty();
    linkedList.printResult();
    linkedList.listReserve(linkedList);
    linkedList.printResult();
    linkedList.~DoublyLinkedList();
    return 0;
}
