#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *plik;
    plik = fopen("liczby.dat","wb");
    int N;
    printf("Ile liczb wylosowac?: ");
    scanf("%d",&N);
    srand(time(NULL));
    int temp;
    for (int i=0; i<N;i++)
    {
        temp=rand()%201-100;
        fwrite(&temp, sizeof(temp),1 ,plik);
        printf("Liczba wylosowana: %d\n",temp);
    }
    fclose(plik);//zamykam
    plik = fopen("liczby.dat","rb");//otwieram
    int suma = 0;
    for (int i=0; i<N; i++)
    {
        fread(&temp,sizeof(temp),1 ,plik);
        suma += temp;
        printf("Liczba odczytana : %d\n",temp);
    }
    printf("Suma liczb   : %d\n", suma);
    printf("Srednia liczb: %f\n", (float)suma/N);
    int ktora;
    printf("Ktora liczbe mam wyswietlic? 0 konczy wyszukiwanie: ");
    scanf("%d", &ktora);
    while(ktora != 0)
    {
        fseek(plik, 4*(ktora-1), SEEK_SET);
        fread(&temp,sizeof(temp),1 ,plik);
        printf("Wyszukana: %d\n", temp);
        printf("Ktora liczbe mam wyswietlic? 0 konczy wyszukiwanie: ");
        scanf("%d", &ktora);
    }

    fclose(plik);
    return 0;
}
