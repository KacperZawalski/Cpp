#include <iostream>

using namespace std;

int main()
{
    cout << "Podaj imie: " << endl;
    string imie;
    cin >> imie;
    cout << "Podaj nazwisko: " << endl;
    string nazwisko;
    cin >> nazwisko;

    cout << imie << ", " << nazwisko;
    return 0;
}
