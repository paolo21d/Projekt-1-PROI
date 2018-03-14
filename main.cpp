#include <iostream>
#include <limits>
#include "Bitowe.h"

using namespace std;

int main() {

    int i;
    char c;

    while (!(cin >> i >> c)) {
        cout << "Blad podaj jeszcze raz!" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << i << " " << c;

    return 0;
}