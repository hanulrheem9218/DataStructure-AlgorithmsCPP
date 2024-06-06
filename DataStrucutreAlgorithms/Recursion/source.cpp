#include <iostream>
using namespace std;
void drawOneTick(const int& tickLength, int tickLabel = -1) {
    for (int i = 0; i < tickLength; i++) {
        cout << "-";
    }
    if (tickLabel >= 0) cout << " " << tickLabel;
    cout << "\n";
}
void drawTicks(const int& tickLength) {
    if (tickLength > 0) {
        drawTicks(tickLength - 1);
        drawOneTick(tickLength);
        drawTicks(tickLength - 1);
    }
}

void drawRuler(const int& nInches, const int& majorLength) {
    drawOneTick(majorLength, 0);
    for (int i = 1; i <= nInches; i++) {
        drawTicks(majorLength - 1);
        drawOneTick(majorLength, i);
    }
}
int main()
{
    cout << "example 4, 3 ruler" << endl;
    drawRuler(4, 3);
    cout << "example 10, 6 ruler" << endl;
    drawRuler(10, 5);
    cout << "Hello World!\n";
}
