#include <string>
#include "Palindrome.h"
#include <iostream>

int a;
std::string str;
int main() {
    std::cout << "Sprawdź Palindrom (1) Wyjście (2)";
    std::cin >> a;
    if (a==2)
    {
        return 0;
    }
    std::cin >> str;
    if (is_palindrome(str)==1)
    {std::cout << "Tak";}
    else {std::cout << "Nie";}
    return 0;
}
