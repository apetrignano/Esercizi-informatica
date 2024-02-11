#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    double somma = 0;
    cout << "quanti numeri vuoi inserire?" << endl;
    cin >> n;
    for (int i = 0; i < n; i++){
        double x;
        cout << "inserire numero: ";
        cin >> x;
        somma += x;
    }
    cout << "media: " << somma/n << endl;
    return 0;
}