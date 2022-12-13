#include <iostream>

using namespace std;

struct batonik{
    string marka;
    float waga;
    int kalorie;
};

int main()
{
    batonik snack = {"szop", 3.7, 350};
    cout << "Marka: " << snack.marka << "\nWaga: " << snack.waga << "\nKalorie: " << snack.kalorie;
    return 0;
}
