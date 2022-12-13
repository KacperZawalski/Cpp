#ifndef BOMBELEK_H
#define BOMBELEK_H
#include <cstdlib>
#include <iostream>
class bombelek
{
    public:
        bombelek();
        int licz=0;
        int temp;

        int sortuj(int liczby[], int rozmiar)
        {

            for (int i=0;i<rozmiar;i++)
                for (int j=0;j<rozmiar;j++)
                {
                    if (liczby[j]>liczby[j+1])
                    {
                        temp=liczby[j];
                        liczby[j]=liczby[j+1];
                        liczby[j+1]=temp;
                        licz++;
                    }
                }
            return licz;
        }
};

#endif // BOMBELEK_H
