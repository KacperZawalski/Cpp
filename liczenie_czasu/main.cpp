#include <iostream>
#include "bombelek.h"
#include "quick.h"
#include "merge_sort.h"
using namespace std;

int main()
{

    int liczby[100];
    for (int i=0; i<100; i++)
    {
        liczby[i]=(rand()%100+1);
    }
    bombelek szop;
    cout << "Iteracji bombelkowe: " << szop.sortuj(liczby,100) << endl;
    quick szop2;
    cout << "Iteracji quicksort: " << szop2.quicksort(liczby,0,99) << endl;
    merge_sort szop3;
    cout << "Iteracji mergesort: " << szop3.merge_sortuj(liczby, 0, 99) << endl;
    return 0;
}
