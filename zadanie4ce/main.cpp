#include <iostream>
#include <math.h>
using namespace std;
int liczba;

int main()
{
    cout << "Witaj mily czlowieku, wprowadz liczbe a zdradze ci jej sekrety:";
    cin >> liczba;
    int * wtb;
    wtb = new int[liczba/2];
    delete [] wtb;
    return 0;
}

int podzielniki(int liczba, int tb[])
{
    int j=0;
    for (int i=1; i<=liczba/2; i++)
    {
        if (liczba%i==0)
        {
            tb[j] = i;
            j++;
        }
    }
    return tb;
}
