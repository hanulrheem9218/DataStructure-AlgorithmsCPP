#include "LinkedQueue.h"
#include "LinkedDeque.h"

#define PRINT(str) std::cout << str << std::endl;
int main()
{
    PRINT("LinkedQueue with Circurlaly LinkedList");
    LinkedQueue<int> link;
    for (int i = 0; i < 9; i++) {
        link.enqueue(i);
    }
    PRINT(link.front());
    link.dequeue();
    link.dequeue();
    link.dequeue();
    link.dequeue();
    link.dequeue();
    link.dequeue();
    link.dequeue();
    link.dequeue();
    link.printAll();
    link.enqueue(241);
    PRINT(link.front());
    link.printAll();
    PRINT("Linked Deque with Doubly LinkedList");
    LinkedDeque<std::string> dLink;
    for (int i = 0; i < 9; i++) {
        dLink.insertFront(std::to_string(i));
        dLink.insertBack(std::to_string(i));
    }
    PRINT("");
    dLink.printAll();
}

