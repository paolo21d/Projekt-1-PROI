//
// Created by paolo on 11.03.2018.
//

#include <algorithm>
#include "Bitowe.h"

using namespace std;

Bitowe::Bitowe() {
    pole.reset();
}

Bitowe::Bitowe(string var) {

}

Bitowe::Bitowe(long long liczba) {
    int i = 0;
    if(liczba<0){
        liczba=-liczba;
        ujemna=true;
    }
    while (liczba != 0) {
        this->pole[i] = liczba % 2;
        liczba %= 2;
        i++;
    }
    ujemna=false;
}

bool Bitowe::wczytajStringBinarny() {
    string s;
    cin >> s;
    //s.reserve();
    int koniec;
    if(s[0]=='-') {
        koniec=s.length()-1;
        this->ujemna= true;
    }else{
        this->ujemna= false;
        koniec=s.length();
    }
    //s.reserve();
    reverse(s.begin(),s.end());
    for (int i = 0; i < koniec; i++) {
        if (s[i] == '0')
            this->pole[i] = false;
        else if (s[i] == '1')
            this->pole[i] = true;
        else {
            this->pole.reset();
            return false;
        }
    }
    return true;
}

bool Bitowe::wczytajStringDecymalny() {
    string s;
    cin >> s;

}

Bitowe Bitowe::operator+(const Bitowe &p) {

}

Bitowe Bitowe::operator-(const Bitowe &p) {

}

Bitowe Bitowe::operator*(const Bitowe &p) {

}
Bitowe & Bitowe::operator=(const Bitowe &p){
    for(int i=0; i<N; i++)
        this->pole[i] = p.pole[i];
    return  *this;
}
bool Bitowe::operator==(const Bitowe &p) {
    for (int i = 0; i < N; i++) {
        if (this->pole[i] != p.pole[i])
            return false;
    }
    return true;
}

bool Bitowe::operator<(const Bitowe &p) {
    for (int i = N - 1; i >= 0; i--) {
        if (this->pole[i] == 1 && p.pole[i] == 0)
            return true;
    }
    return false;
}

bool Bitowe::operator>(const Bitowe &p) {
    for (int i = N - 1; i >= 0; i--) {
        if (this->pole[i] == 0 && p.pole[i] == 1)
            return true;
    }
    return false;
}

ostream &operator<<(ostream &out, const Bitowe &p) {
    return out << p; //za p wstawić to co ma się wyświelić
}

/*(istream &operator>>(istream &input, const Bitowe &p) {
    string s;
    input>>s;
    for(int i=0; i<s.length(); i++) {
        if(s[i]!=0 && s[i]!=1){
            p.pole.reset();
            return  input;
        }
    }
    return  input;
}*/