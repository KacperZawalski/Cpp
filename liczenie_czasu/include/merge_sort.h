#ifndef MERGE_SORT_H
#define MERGE_SORT_H

class merge_sort
{
    public:
        int licz=0;
        merge_sort();
            void merge(int tablica[], int start, int srodek, int koniec)
            {
                int *tab_pom = new int[(koniec-start+1)]; // utworzenie tablicy pomocniczej
                int i = start, j = srodek+1, k = 0;

                while (i <= srodek && j <= koniec)
                {
                    if (tablica[j] < tablica[i])
                    {
                        tab_pom[k] = tablica[j];
                        j++;
                    }
                    else
                    {
                        tab_pom[k] = tablica[i];
                        i++;
                    }
                    k++;
                }

                if (i <= srodek)
                {
                    while (i <= srodek)
                    {
                        tab_pom[k] = tablica[i];
                        i++;
                        k++;
                    }
                }
                else
                {
                     while (j <= koniec)
                     {
                          tab_pom[k] = tablica[j];
                          j++;
                          k++;
                     }
                }

                for (i = 0; i <= koniec-start; i++)
                    tablica[start+i] = tab_pom[i];
            }

            int merge_sortuj(int tablica[], int start, int koniec)
            {
                int srodek;

                if (start != koniec)
                {
                    srodek = (start + koniec)/2;
                    merge_sortuj(tablica, start, srodek);
                    merge_sortuj(tablica, srodek+1, koniec);
                    merge(tablica, start, srodek, koniec);
                    licz++;
                }
                return licz;
            }
};

#endif // MERGE_SORT_H
