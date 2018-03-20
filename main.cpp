#include <iostream>
#include <limits>
#include <vector>
#include "Bitowe.h"

using namespace std;

int main() {

    vector <Bitowe> lista;
    string wczytane, znak;
    int opcja;
    long long liczba;
    while (1){
        cout<<"MENU\tWybierz jeden z numerow:"<<endl;
        cout<<"1. Wprowadz liczbe w postaci dziesietnej"<<endl;
        cout<<"2. Wprowadz liczbe w postaci binarnej"<<endl;
        cout<<"3. Dodaj wprowadzone liczby"<<endl;
        cout<<"4. Odejmij wprowadzone liczby"<<endl;
        cout<<"5. Pomnoz wprowadzone liczby"<<endl;
        cout<<"6. Podziel wprowadzone liczby"<<endl;
        cout<<"7. Porownaj wprowadzone liczby"<<endl;
        cout<<"8. Wypisz wprowadzone liczby w postaci dziesietnej"<<endl;
        cout<<"9. Wypisz wprowadzone liczby w postaci binarnej"<<endl;
        cout<<"0. Zamknij"<<endl;

        while (!(cin >> opcja)) {
            cout << "Blad podaj jeszcze raz!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        if(opcja==1){
            lista.push_back(Bitowe());
            lista.back().wczytajStringDecymalny();
        }else if(opcja==2){
            lista.push_back(Bitowe());
            lista.back().wczytajStringBinarny();
        }else if(opcja==3){

        }else if(opcja==4){

        }else if(opcja==5){

        }else if(opcja==6){

        }else if(opcja==7){

        }else if(opcja==8){

        }else if(opcja==9){
            cout<<"Lista liczb:"<<endl;
            for (int i = 0; i < lista.size(); ++i) {
                cout<<i<<": ";
                lista[i].wypiszBinarnie();
                cout<<endl;
            }
        }else if(opcja==0){
            break;
        }else {
            cout<<"Wprowadz poprawny numer opcji!!"<<endl;
        }
    }


    // zamiana z stringa dziesietnego to na glupa dzielenie przez 2 tylko ze trzeba sobie samemu napisac dzielenie pisemne
    // kazda operacja arytmetyczna +-*/ ma byc napisana na bitach-pisemnie
    // rozmiar N to jest ilosc cyfr w dziesietnym, czyli przeliczyc ile max cyfr w dwojkowym bedzie c=chyba log2(wartosc_liczby_w_dziesietnej)+1 czyli tutaj pewnie n*log2(10) = ceil(3.4*n)+1
    return 0;
}