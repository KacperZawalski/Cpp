#include <stdio.h>
#include <time.h>
using namespace std;

typedef struct {
    int g,m,s;
}czas;

czas wczytaj(void);
czas aktualny(void);
int main()
{
    int roznicaS;
    czas t1 = wczytaj();
    czas t2 = aktualny();
    printf("Czas podany                   : %d:%d:%d\n",t1.g, t1.m, t1.s);
    printf("Czas pobrany                  : %d:%d:%d\n",t2.g, t2.m, t2.s);
    roznicaS = (t1.g*3600 + t1.m*60 + t1.s) - (t2.g*3600 + t2.m*60 + t2.s);
    if (roznicaS < 0)
        roznicaS = -roznicaS;
    printf("Roznica w sekundach           : %d\n",roznicaS);
    printf("Roznica w minutach i sekundach: %d:%d\n",roznicaS/60,roznicaS%60);
    return 0;
}

czas wczytaj(void)
{
    czas cos;
    printf("Podaj czas (gg mm ss): ");
    scanf("%d%d%d",&cos.g, &cos.m, &cos.s);
    return cos;
}

czas aktualny(void)
{
    czas cos;   //zmienna typu czas
    czas * wsk; //wskaŸnik typu czas
    wsk = &cos; //wskaŸnik na adres zmiennej cos
    time_t c = time(NULL);
    struct tm *p = localtime(&c);
    wsk->g = p->tm_hour;
    wsk->m = p->tm_min;
    wsk->s = p->tm_sec;
    return *wsk;
}
