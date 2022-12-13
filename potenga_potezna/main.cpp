#include <iostream>
#include <stdio.h>
using namespace std;
float pods, wykl, wynik = 1.0;
int main()
{
    printf("%s","Uprasza sie uprzejmie o podanie podstawy i wykladnika potegi.\n");
    printf("%s","Podstawa: ");
    scanf("%f",&pods);
    printf("%s","Wykladnik: ");
    scanf("%f",&wykl);

    if (wykl>=0)
    {
        for (int i=0;i<wykl;i++)
        {
            wynik*=pods;
        }
    }
    else
    {
        for (int i=0;i<wykl;i++)
        {
            wynik*=(1.0/pods);
        }
    }

    printf("%s%0.2f","Wynik: ",wynik);
    return 0;
}
