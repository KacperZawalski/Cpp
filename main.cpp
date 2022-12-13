#include <iostream>
#include <cstdlib>
#include <cstdarg>
using namespace std;

int szukaj(double xx, ...);
int porownaj(double x, double y, double eps);
int main()
{
    cout << "Znaleziono: " << szukaj(3.3, 4.0, 2.0, 1.1+1.1+1.1, 11.1, 0.0) << endl;
    return 0;
}

int szukaj(double xx, ...)
{
    double x;
    va_list arg;
    va_start(arg, xx);
    while ( (x=va_arg(arg, double))!=0.0)
    {
        if (porownaj(x, xx, 1000.0))
            return 1;
    }
    va_end(arg);
    return 0;
}

int porownaj(double x, double y, double eps)
{
    x = x*eps;
    y = y*eps;
    int x1 = x;
    int y1 = y;
    if (x1 == y1)
        return 1;
    else
        return 0;
}
