#include "Palindrome.h"
int dl; bool wyn=1;
bool is_palindrome(std::string str){
    dl=str.length();
    wyn=1;
    for (int i=0; i!=dl; i++)
    {
        if (str[i]!=str[dl-1-i])
        {wyn = 0; break;}
    }
    return wyn;
}