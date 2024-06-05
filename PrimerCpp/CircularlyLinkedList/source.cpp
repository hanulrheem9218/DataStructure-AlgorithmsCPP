#include "CircularlyLinkedList.h"

int main()
{
    CircularlyLinkedList* circleList = new CircularlyLinkedList;
    for (int i = 0; i < 9; i++) {
        circleList->add(std::to_string(i));
    }
    circleList->advance(); //shifting right
    circleList->printAll();
    circleList->advance(); //shifting right
    circleList->printAll();
    circleList->remove();
    circleList->printAll();
    circleList->add("Hello Circle");
    circleList->printAll();
    return 0;
}

