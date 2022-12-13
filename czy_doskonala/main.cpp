#include <iostream>
#include <math.h>
using namespace std;

bool czy_doskonala(int n)
{
    int sum = 1;
    int p = sqrt(n);
    for (int i=2;i<=p;i++)
        if (n%i == 0)
            sum += i + n/i;
    if (n == p*p)
        sum-=p;
    if (sum == n)
        return 1;
    return 0;
}

int main()
{
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    if (czy_doskonala(liczba))
        cout << "Liczba " << liczba << " jest doskonala." << endl;
    else
        cout << "Liczba " << liczba << " nie jest doskonala." << endl;
    return 0;
}
