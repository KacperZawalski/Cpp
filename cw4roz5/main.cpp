#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double dafne = 100.0;
    double proc = 0.05;
    double cleo = 100.0;
    int rok = 0;
    do
    {
        cout << "ROK " << rok << endl;
        cout << "Dafne: " << dafne << endl;
        cout << "Cleo: " << cleo << endl << endl;
        dafne += 10;
        cleo = cleo * proc + cleo;
        rok++;
    }
    while (dafne>cleo);
    cout << "ROK " << rok << endl;
    cout << "Dafne: " << dafne << endl;
    cout << "Cleo: " << cleo << endl << endl;
    return 0;
}
