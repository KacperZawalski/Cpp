#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

int main()
{
    int arsize, temp;
    srand(time(NULL));
    arsize = rand()%200+1;
    fstream file("plik.txt", ios::out | ios::in);
    for (int i=0;i<arsize;i++)
    {
        temp = rand()%100;
        file << temp << "\n";
    }
    string dane;
    getline(file, dane);
    cout << dane;
    file.close();
    return 0;
}
