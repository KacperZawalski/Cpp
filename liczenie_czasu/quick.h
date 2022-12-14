#ifndef QUICK_H
#define QUICK_H
#include <iostream>
using namespace std;
class quick
{
    public:
        quick();
        int licz=0;
        int quicksort(int tab[], int left, int right)
        {
            int i=left;
            int j=right;
            int x=tab[(left+right)>>1];
            do{
                while(tab[i]<x) i++;
                while(tab[j]>x) j--;
                if(i<=j){
                    int temp=tab[i];
                    tab[i]=tab[j];
                    tab[j]=temp;
                    i++;
                    j--;
                    licz++;
                }
            }while(i<=j);
            if(left<j) quicksort(tab,left,j);
            if(right>i) quicksort(tab,i,right);
            return licz;
        }
};

#endif // QUICK_H
