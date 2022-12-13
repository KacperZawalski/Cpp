#include <stdio.h>
#include <stdlib.h>

void losuj(int *t[],int n)
{
    srand(time(NULL));
    for (int i=0; i<n; i++)
    {
        t[i] = rand()%20+1;
    }
}

void wypisz(int *t[],int n)
{
    printf("WYPIS:\n");
    for (int i=0; i<n; i++)
    {
        printf("t[i]: %d\n",t[i]);
    }
    printf("\n");
}

void sortuj(int *t[], int n)
{
    int temp;
    for (int j=0; j<n-1; j++)
    {
        for (int i=0; i<n-1; i++)
        {
            if(t[i]>t[i+1])
            {
                temp = t[i];
                t[i] = t[i+1];
                t[i+1] = temp;
            }
        }
    }
}

int main()
{
    const int N = 10;
    int tab[N];
    int *p;
    p = tab;
    losuj(p,N);
    wypisz(p,N);
    sortuj(p,N);
    wypisz(p,N);

    return 0;
}
