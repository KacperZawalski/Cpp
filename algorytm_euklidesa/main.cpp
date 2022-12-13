#include <iostream>
#include <windows.h>
using namespace std;

int NWD(int a, int b)
{
    int tymczasowa;
    while (b!=0)
    {
        tymczasowa = b;
        b = a%b;
        a = tymczasowa;
    }
    return a;
}

int main()
{
    int a,b;
    cout << "Podaj dwie liczby: ";
    cin >> a >> b;
    cout << NWD(a,b) << endl;
    system("pause");
    return 0;
}
