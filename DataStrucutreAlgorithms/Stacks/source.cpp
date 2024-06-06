#include <iostream>
#include <stack>
#include "ArrayStack.h"
#include "LinkedStack.h"
using namespace std;

vector<string> getHtmlTags() {
    vector<string> tags;
    while (std::cin) {
        string line;
        std::getline(cin,line);
        int pos = 0;
        int ts = line.find("<", pos);
        {
            while (ts != string::npos) {
                int te = line.find(">", ts + 1);
                tags.push_back(line.substr(ts, te - ts + 1));
                pos = te + 1;
                ts = line.find("<", pos);
            }
        }
    }
    return tags;
}
bool isHtmlMatched(const vector<string>& tags) {
    LinkedStack S;
    typedef vector<string>::const_iterator Iter;
    for (Iter p = tags.begin(); p != tags.end(); ++p) {
        if (p->at(1) != '/') S.push(*p);
        else {
            if (S.empty()) return false;
            string open = S.top().substr(1);
            string close = p->substr(2);
            if (open.compare(close) != 0) return false;
            else S.pop();
        }
    }
    if (S.empty()) return true;
    else return false;
}

int main()
{
    std::cout << "Stack Demonstration!\n";
    stack<int> myStack;
    //size()
    //empty()
    //push()
    //pop()
    //top()
    auto setence = getHtmlTags();
    isHtmlMatched(setence);

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
