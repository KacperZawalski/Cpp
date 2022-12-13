#include <iostream>
#include <stdio.h>
#include <ctype.h>

using namespace std;
const int MAXN = 81;

int main()
{
    int znak, slow, lit, mlit, dlit, cyfr;
    znak = 0;
    slow = 1;
    lit  = 0;
    mlit = 0;
    dlit = 0;
    cyfr = 0;
    char text[MAXN];
    printf("Podaj zdanie: ");
    fgets(text, MAXN, stdin);
    int i = 0;
    while (text[i]!= '\0')
    {
        znak++;
        if (text[i]==' ')
        {
            slow++;
        }
        if (isalpha(text[i]))
        {
            lit++;
        }
        if (islower(text[i]))
        {
            mlit++;
        }
        if (isupper(text[i]))
        {
            dlit++;
        }
        if (isdigit(text[i]))
        {
            cyfr++;
        }
        i++;
    }
    printf("%s%d\n","Liczba znakow       : ",znak-1);
    printf("%s%d\n","Liczba slow         : ",slow);
    printf("%s%d\n","Liczba liter        : ",lit);
    printf("%s%d\n","Liczba malych liter : ",mlit);
    printf("%s%d\n","Liczba duzych liter : ",dlit);
    printf("%s%d\n","Liczba cyfr         : ",cyfr);
    return 0;
}
