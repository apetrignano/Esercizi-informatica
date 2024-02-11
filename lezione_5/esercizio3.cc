#include <iostream> 
using namespace std;
int main()
{
    int pari = 0;
    int dispari = 0;
    int x; 
    cout << "Ciao!" << endl;
    for (;;) {
        cout << "inserire numero: " << endl;
        cin >> x;
        if(cin.eof()) break;
        if (x % 2 == 0) {
            pari ++;
        } 
        else {
            dispari ++;
        }

    }
    cout << "# pari: " << pari << endl;
    cout << "# dispari: " << dispari << endl;
    return 0;
}