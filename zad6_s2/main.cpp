#include <iostream>

using namespace std;

class Bryla
{
public:
    virtual ~Bryla(){};
    virtual void wypiszInfo();
    virtual double obliczObjetosc();
    Bryla(double rr, double hh);
    double r, h;
    const double PI = 3.146;
};
Bryla::Bryla(double rr, double hh)
{
    this->r = rr;
    this->h = hh;
}
double Bryla::obliczObjetosc()
{
    return 1;
}
void Bryla::wypiszInfo()
{
    cout << "R: " << r << endl;
    cout << "H: " << h << endl;
}
class Walec :public Bryla
{
public:
    ~Walec(){};
    double obliczObjetosc();
    Walec(double rr, double hh);
};
Walec::Walec(double rr, double hh):Bryla(rr, hh){}
double Walec::obliczObjetosc()
{
    return PI*r*r*h;
}

class Stozek :public Bryla
{
public:
    ~Stozek(){};
    double obliczObjetosc();
    Stozek(double rr, double hh): Bryla(rr, hh){};
};

double Stozek::obliczObjetosc()
{
    return PI*r*r*h*(1.0/3.0);
}

class StozekSciety :public Stozek
{
public:
    ~StozekSciety(){};
    double obliczObjetosc();
    void wypiszInfo();
    double R;
    StozekSciety(double rr, double hh, double RR) : Stozek(rr, hh)
    {
        R = RR;
    };
};
double StozekSciety::obliczObjetosc()
{
    return (PI/3)*h*(r*r+r*R+R*R);
}
void StozekSciety::wypiszInfo()
{
    cout << "R         : " << r << endl;
    cout << "R scietego: " << R << endl;
    cout << "H         : " << h << endl;
}
int main()
{
    Bryla *stozek1 = new Stozek(5,2);
    Bryla *sciety1 = new StozekSciety(1,6,2);
    Bryla *walec1 = new Walec(3,8);
    stozek1->wypiszInfo();
    sciety1->wypiszInfo();
    walec1->wypiszInfo();
    cout << stozek1->obliczObjetosc() << endl;
    cout << sciety1->obliczObjetosc() << endl;
    cout << walec1->obliczObjetosc() << endl;

    return 0;
}
