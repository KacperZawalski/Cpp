#include <iostream>
#include <ctime>
#include <iomanip>
#include <windows.h>
using namespace std;

int const N = 3;
int tab[N][N];
int MIN=21, MAX=0;
int min_c[2];
int max_c[2];
int main()
{
    HANDLE hOut;
    hOut = GetStdHandle( STD_OUTPUT_HANDLE );
    srand(time(NULL));
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<N; j++)
        {
            tab[i][j] = rand()%20+1;
            if (MIN>tab[i][j])
            {
                MIN=tab[i][j];
                min_c[0] = i;
                min_c[1] = j;
            }
            if (MAX<tab[i][j])
            {
                MAX=tab[i][j];
                max_c[0] = i;
                max_c[1] = j;
            }
        }
    }
    int k = 2;
    cout << "Zawartosc macierzy: " << endl << endl;
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<N; j++)
        {
            if (tab[i][j]==MAX)
            {
                SetConsoleTextAttribute( hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
                cout << right << setw(2) << " <";
                cout << right << setw(k) << tab[i][j];
                cout << right << setw(1) << ">";
                continue;
            }
            if (tab[i][j]==MIN)
            {
                SetConsoleTextAttribute( hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
                cout << right << setw(2) << " >";
                cout << right << setw(k) << tab[i][j];
                cout << right << setw(1) << "<";
                continue;
            }
            SetConsoleTextAttribute( hOut, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
            cout << right << setw(2) << "  ";
            cout << setw(k) << right << tab[i][j];
            cout << right << setw(1) << " ";
        }
        SetConsoleTextAttribute( hOut, FOREGROUND_GREEN);
        cout << endl;
    }
    SetConsoleTextAttribute( hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout << "\nNajwieksza: " << tab[max_c[0]][max_c[1]] << "[" << max_c[0] << "][" << max_c[1] << "]" << endl;
    SetConsoleTextAttribute( hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    cout << "Najmniejsza: " << tab[min_c[0]][min_c[1]] << "[" << min_c[0] << "][" << min_c[1] << "]" << endl;
    SetConsoleTextAttribute( hOut, FOREGROUND_GREEN );
    return 0;
}
