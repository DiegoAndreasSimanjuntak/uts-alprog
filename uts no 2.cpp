#include <iostream>
using namespace std;

int main()
{
int tinggi;
    cout << "Masukkan tinggi bintang: ";
    cin >> tinggi;

    for (int i = 1; i <= tinggi; i++) {
        for (int j = tinggi; j > i; j--) {
            cout << "";
        }
        for (int k = 1; k <= (1 * i ); k++) {
            cout << "*";
        }
        cout << endl;
    }
}
