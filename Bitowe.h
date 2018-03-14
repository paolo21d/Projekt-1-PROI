//
// Created by paolo on 11.03.2018.
//

#ifndef PROI_P1_BITOWE_H
#define PROI_P1_BITOWE_H

#include <bitset>
#include <iostream>

#define N 20

class Bitowe {
    std::bitset<N> pole;

public:
    Bitowe();
    Bitowe (unsigned long long liczba);
    Bitowe(std::string var);

    bool wczytajStringBinarny();
    bool wczytajStringDecymalny();
    Bitowe operator+(const Bitowe &p);
    Bitowe operator-(const Bitowe &p);
    Bitowe operator*(const Bitowe &p);
    Bitowe & operator=(const Bitowe &p);
    bool operator==(const Bitowe &p);
    bool operator>(const Bitowe &p);
    bool operator<(const Bitowe &p);
    friend std::ostream &operator<<(std::ostream &out, const Bitowe &p);
    //friend std::istream &operator>>(std::istream &input, const Bitowe &p);
};


#endif //PROI_P1_BITOWE_H
