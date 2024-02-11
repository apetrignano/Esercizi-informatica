#include <iostream>
#include <fstream>
using namespace std;
int main () {
    double noim = 0.0; //somma
    double asdf = 0.0, x = 0.0; //numero elementi e variabile di supporto
    fstream f;
    if (!f.good()) {
        cout << "errore apertura file" << endl;
        return -1;
    }
    for (;;){
        f >> x;
        if (f.eof()) break;
        noim += x;
        asdf ++;
    }
    cout << "accelerazione g: " << noim/asdf << endl;
    cout << "spero proprio che sia g=9.7803184, se no abbiamo un problema" << endl;

    return 0;
}