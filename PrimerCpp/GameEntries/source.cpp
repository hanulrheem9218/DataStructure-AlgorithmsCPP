#include "game-entry.h"
#include "scores.h"
using namespace std;
int main()
{
    //simple demonstrations
    GameEntry* entries = new GameEntry[10]{ {"John",2},{"Reyna",2}, {"Halord",3}};
    Scores* score = new Scores(10);
    for (int j = 0; j < 10; j++) {
        cout << (&entries[j] != NULL) ? entries[j].getName() : "empty";
    }
  //  score->remove(0);

    
    //cout << entry->getName() << entry->getScore() << endl;
    return 0;
}
