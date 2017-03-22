using namespace std;
#include <iostream>
#include <fstream>
#include "Polybius.h"

int main(ifstream plik1, ofstream plik2, bool wyb){
    string wej="", wyj;
    char word[64];

    if(!plik1)
        cout << "Nie można otworzyć pliku!" << endl;

    while(!plik1.eof()) {
        plik1>>wej;
    }
    plik1.close();
    if (wyb){
        plik2 << PolybiusCrypt(wej);
    }
    else{
        plik2 << PolybiusDecrypt(wej);
    }
}