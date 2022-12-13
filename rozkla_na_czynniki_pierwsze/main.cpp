#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int liczba, pierwiastek, k;
    k=2;
    pierwiastek = sqrt(liczba);
    cout << "Podaj liczbe: ";
    cin >> liczba;
    cout << "Czynniki pierwsze liczby " << liczba << ": ";
    while (liczba > 1 && pierwiastek >= k)
    {
        while (liczba%k == 0)
        {
            cout << k << ", ";
            liczba/=k;
        }

        ++k;
    }
}
