#include "DoubleBasePalindromes.h"
#include <iostream>
uint64_t DoubleBasePalindromes(int max_vaule_exculsive) {
    uint64_t wynik = 0, dl;
    int k, l, wyn;
    std::string str="";

    for (int i = max_vaule_exculsive; i > 0; i--) {
        k = i;
        l = i;
        while (k!=0)
        {
            str+=k%10;
            k=k/10;
        }
        dl=str.length();
        for (int m=0; m!=dl/2; m++)
        {
            if (str[m] != str[dl - 1 - m])
            {
                l = 0;
                break;
            }
        }

        str="";
        wyn=i;
        if (l==0)
        {wyn=0;}
        while (l!=0)
        {
            str+=l%2;
            l=l/2;
        }

        dl=str.length();
        for (int m=0; m!=dl/2; m++) {
            if (str[m] != str[dl - 1 - m])
            {
                wyn = 0;
                break;
            }
        }
        str="";
        wynik += wyn;
    }

    return wynik;
}