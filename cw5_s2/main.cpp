#include <iostream>

using namespace std;

class Macierz
{

private:
    static const int N=3;
    float mac[N][N];
public:
    Macierz();
    Macierz(int rozmiar, float m[N][N]);
    setMac(int i, int j, float wartosc);
    getMac(int i, int j);
    Macierz operator+(Macierz m);
    Macierz operator-(Macierz m);
    Macierz operator*(Macierz m);
    Macierz operator*(float wartosc);
    Macierz operator~();
    int operator()(int i, int j);
    void operator<<(Macierz m);
    void operator>>(Macierz m);
};

Macierz::Macierz()
{
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            mac[i][j]=0;
}
Macierz::Macierz(int rozmiar, float m[N][N])
{
    for(int i=0; i<rozmiar; i++)
        for(int j=0; j<rozmiar; j++)
            mac[i][j] = m[i][j];
}
Macierz::setMac(int i, int j, float wartosc)
{
    mac[i][j] = wartosc;
}
Macierz::getMac(int i, int j)
{
    return mac[i][j];
}
Macierz Macierz::operator+(Macierz m)
{
    Macierz wynik;
    for(int i=0; i<N ;i++)
        for(int j=0; j<N; j++)
            wynik.mac[i][j] = mac[i][j] + m.mac[i][j];
    return wynik;
}
Macierz Macierz::operator-(Macierz m)
{
    Macierz wynik;
    for(int i=0; i<N ;i++)
        for(int j=0; j<N; j++)
            wynik.mac[i][j] = mac[i][j] - m.mac[i][j];
    return wynik;
}
Macierz Macierz::operator*(Macierz m)
{
    Macierz wynik;
    for(int i=0; i<N ;i++)
        for(int j=0; j<N; j++)
            wynik.mac[i][j] = mac[i][j] * m.mac[i][j];
    return wynik;
}
Macierz Macierz::operator*(float wartosc)
{
    Macierz wynik;
    for(int i=0; i<N ;i++)
        for(int j=0; j<N; j++)
            wynik.mac[i][j] = mac[i][j] * wartosc;
    return wynik;
}
void Macierz::operator<<(Macierz m)
{
    for(int i=0; i<N ;i++)
    {
        for(int j=0; j<N; j++)
        {
            cout << mac[i][j] << " ";
        }
        cout << endl;
    }
}
void Macierz::operator>>(Macierz m)
{
        for(int i=0; i<N ;i++)
    {
        for(int j=0; j<N; j++)
        {
            cout << "Podaj wartosc[" << i << "][" << j << "]: ";
            cin >> mac[i][j];
        }
    }
}

Macierz Macierz::operator~()
{
    Macierz wynik;
    for(int i=0; i<N ;i++)
        for(int j=0; j<N; j++)
            wynik.mac[i][j] = mac[j][i];
    return wynik;
}

int Macierz::operator()(int i, int j)
{
    return mac[i][j];
}
int main()
{
    float tab[3][3] = {1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0};
    Macierz m1;
    Macierz m2(3, tab);
    m1 << m1;
    cout << endl;
    m2 << m2;
    cout << endl;
    ~m2 << m2;
    return 0;
}
