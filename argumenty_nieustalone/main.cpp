#include <stdio.h>
#include <stdarg.h>
#include <cstdlib>
#include <cmath>
using namespace std;

void srednia(double *saryt, double *sgeom, ...);

int main()
{
    double saryt;
    double sgeom;
    srednia(&saryt, &sgeom, 1.0, 9.0, 0.0);
    return 0;
}

void srednia(double *saryt, double *sgeom, ...)
{
    double suma = 0;
    double iloczyn = 1;
    int licznik = 0;
    double x;

    va_list arg;
    va_start(arg, sgeom);

    while( (x = va_arg(arg, double)) != 0.0 )
    {
        suma += x;
        iloczyn *= x;
        licznik++;
    }
    va_end(arg);
    *saryt = suma/licznik;
    *sgeom = pow(iloczyn, (1.0/licznik));
    printf("Srednia arytmetyczna: %lf\n", *saryt);
    printf("Srednia geometryczna: %lf\n", *sgeom);
}
