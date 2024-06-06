#include <iostream>
#include <stack>
#include "ArrayStack.h"
#include "LinkedStack.h"
using namespace std;
int main()
{
    std::cout << "Stack Demonstration!\n";
    stack<int> myStack;
    //size()
    //empty()
    //push()
    //pop()
    //top()

    cout << "array stack" << endl;
    ArrayStack<int> A;
    for (int i = 0; i <= 100; i++) {
        A.push(i);
    }

    cout << A.top() << endl;
    A.pop();
    cout << A.top() << endl;
    ArrayStack<string> S = ArrayStack<string>(10);
    for (int j = 0; j <= 100; j++) {
        S.push(to_string(j));
    }
    cout << S.top() << endl;
    S.pop();
    cout << S.top() << endl;
    cout << "linked stack" << endl;
    //you need to insert vector here.
    //S.reverse();

    LinkedStack hi;
    for (int i = 0; i < 100; i++) {
        hi.push(std::to_string(i));
    }
    cout << hi.top() << endl;
    hi.pop();
    cout << hi.top() << endl;
}
