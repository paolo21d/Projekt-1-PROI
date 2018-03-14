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



    // zamiana z stringa dziesietnego to na glupa dzielenie przez 2 tylko ze trzeba sobie samemu napisac dzielenie pisemne
    // kazda operacja arytmetyczna +-*/ ma byc napisana na bitach-pisemnie
    // rozmiar N to jest ilosc cyfr w dziesietnym, czyli przeliczyc ile max cyfr w dwojkowym bedzie c=chyba log2(wartosc_liczby_w_dziesietnej)+1 czyli tutaj pewnie n*log2(10) = ceil(3.4*n)+1
    return 0;
}