#include <iostream>

using namespace std;

class osoba
{
private:
        string imie;
        string nazwisko;
public:
    osoba(string i, string n) : imie(i), nazwisko(n)
    {
    }
    string getImie();
    string getNazwisko();
};

class konto
{
private:
    float saldo;
    osoba klient;
public:
    konto(osoba a) : klient(a){saldo = 0.0;};

    float getSaldo(void);
    void setSaldo(float);
    friend void wypisz(konto *a);
    friend void wplata(konto * a, float kwota);
    friend void wyplata(konto * a, float kwota);
    friend void przelew(konto * a, konto * b, float kwota);
};

string osoba::getImie()
{
    return imie;
}
string osoba::getNazwisko()
{
    return nazwisko;
}
float konto::getSaldo()
{
    return saldo;
}
void konto::setSaldo(float s)
{
    saldo = s;
}
void wypisz(konto * a)
{
    cout << "Imie: " << a->klient.getImie() << endl;
    cout << "Nazwisko: " << a->klient.getNazwisko() << endl;
    cout << "Saldo: " << a->getSaldo() << endl << endl;
}
void wplata(konto * a, float kwota)
{
    a->setSaldo(a->getSaldo()+kwota);
}

void wyplata(konto * a, float kwota)
{
    a->setSaldo(a->getSaldo()-kwota);
}

void przelew(konto * a, konto * b, float kwota)
{
    a->setSaldo(a->getSaldo() - kwota);
    b->setSaldo(b->getSaldo() + kwota);
}

int main()
{
    string i = "Jan";
    string n = "Kowalski";
    osoba kowalski(i,n);
    i = "Magda";
    n = "Nowak";
    osoba nowak(i,n);
    konto * kowalski_konto = new konto(kowalski);
    konto * nowak_konto = new konto(nowak);

    kowalski_konto->setSaldo(200.0);
    nowak_konto->setSaldo(50.0);
    wypisz(kowalski_konto);
    wypisz(nowak_konto);
    przelew(kowalski_konto, nowak_konto, 25.0);
    wypisz(kowalski_konto);
    wypisz(nowak_konto);
    delete kowalski_konto;
    delete nowak_konto;

    return 0;
}
