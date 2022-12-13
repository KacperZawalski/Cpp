#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int n, maksymalna = 0;
    cout << "Jak duzy zbior chcesz przeszukac?: ";
    cin >> n;
    int A[n];
    srand(time(NULL));
    for (int i=0;i<n;i++)
    {
        A[i] = rand()%100 + 1;
        cout << A[i] << " ";
        if (maksymalna < A[i])
            maksymalna = A[i];
    }
    cout << "Najwieksza liczba w zbiorze, to: " << maksymalna;
    return 0;
}
