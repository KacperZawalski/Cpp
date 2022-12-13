#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main()
{
    FILE * plikD;
    FILE * plikT;
    plikD = fopen("dane.dat","wb");
    plikT = fopen("dane.txt","w");
    if (fopen("dane.dat","wrb") != NULL && fopen("dane.txt","w") != NULL)
    {
        cout << "Blad otwarcia pliku!" << endl;
        exit(2);
    }
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    srand(time(NULL));
    int ile = 0;
    for (int i=1; i<=(liczba/2); i++)
    {
        if (liczba %i==0)
        {
            cout << "Podzielnik: " << i << endl;
            fprintf(plikT,"%d, ",i);
            fwrite(&i,sizeof i, 1, plikD);
            ile++;
        }
    }
    cout << "Podzielnik: " << liczba << endl;
    fprintf(plikT,"%d, ",liczba);
    fwrite(&liczba,sizeof liczba, 1, plikD);
    ile++;

    fclose(plikT);
    fclose(plikD);
    plikD = fopen("dane.dat", "rb");
    if (plikD == NULL)
    {
        cout << "Blad otwarcia pliku!" << endl;
        exit(2);
    }
    int * tab;
    tab = (int*) calloc(ile, sizeof(int));

    if (tab == NULL)
    {
        cout << "Blad alokowania pamieci!" << endl;
        exit(2);
    }
    int temp;
    for (int i=0; i<ile; i++)
    {
        fread(&temp, sizeof temp, 1, plikD);
        tab[i] = temp;
        cout << "tab[" << i+1 << "]: " << tab[i] << endl;
    }
    fclose(plikD);
    free(tab);
    return 0;
}
