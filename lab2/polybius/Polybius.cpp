#include <vector>
#include "Polybius.h"
string PolybiusCrypt(string message){
    string wyj="", wart;
    map <char, string> tabzam = {{'a',"11"}, {'b',"12"}, {'c',"13"}, {'d',"14"}, {'e',"15"}, {'f',"21"}, {'g',"22"}, {'h',"23"},
                                 {'i',"24"}, {'k',"25"},{'l',"31"}, {'m',"32"}, {'n',"33"}, {'o',"34"}, {'p',"35"}, {'q',"41"}, {'r',"42"},
                                 {'s',"43"}, {'t',"44"}, {'u',"45"}, {'v',"51"}, {'w',"52"}, {'x',"53"}, {'y',"54"}, {'z',"55"}, {' ',""}};
for (int i=0; i<message.length(); i++)
{

    char j = message[i];
    if (j<91&&j>64)
        j+=32;
    if (j=='j')
        j='i';
    wyj+=tabzam[j];
}
    message = wyj;
    wyj="";
    return message;

};

string PolybiusDecrypt(string crypted){
    string wyj="", wart="";
    map <char, string> tabzam = {{'a',"11"}, {'b',"12"}, {'c',"13"}, {'d',"14"}, {'e',"15"}, {'f',"21"}, {'g',"22"}, {'h',"23"},
                                 {'i',"24"}, {'k',"25"},{'l',"31"}, {'m',"32"}, {'n',"33"}, {'o',"34"}, {'p',"35"}, {'q',"41"}, {'r',"42"},
                                 {'s',"43"}, {'t',"44"}, {'u',"45"}, {'v',"51"}, {'w',"52"}, {'x',"53"}, {'y',"54"}, {'z',"55"}, {' ',""}};
    for (int i=0; i<crypted.length(); i+=2)
    {
        wart=crypted[i];
        wart+=crypted[i+1];
        for (auto n : tabzam)
        {
            if (wart == n.second){
                wyj+=n.first;
                break;
            }
        }
    }
    crypted = wyj;
    wyj="";
    return crypted;

};