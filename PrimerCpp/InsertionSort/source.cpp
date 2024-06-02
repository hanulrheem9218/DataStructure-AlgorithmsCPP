#include "algorithm.h"

int main()
{
    algorithm *algo = new algorithm();
    const char* test = "BCDAEHGH";
    std::string results = algo->InsertionSort(test, strlen(test));
   
    std::cout << results;
    //after the execution end with the deconstructor.
    algo->~algorithm();
    return 0;
}
