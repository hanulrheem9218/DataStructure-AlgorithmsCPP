#include <iostream>
#include <string>
#include <vector>
#include "ArrayVector.h"
int main()
{
    std::vector<std::string> linkedVector;
    for (int i = 0; i < 9; i++) {
        linkedVector.push_back(std::to_string(i));
    }
  //  std::cout << linkedVector << std::endl;
    std::cout << "Hello World!\n";

    ArrayVector arrayVector;
    for (int i = 0; i < 9; i++) {
        arrayVector.insert(0,i);
    }
    
    for (int j = 0; j < 9; j++) {
        std::cout << arrayVector[j] << std::endl;
    }
}
