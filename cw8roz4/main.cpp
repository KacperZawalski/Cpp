#include <iostream>

using namespace std;
struct pizza {
    char nazwa_firmy[20];
    float srednica;
    int waga;
};
int main()
{
    pizza * cos = new pizza;
    cin.getline((*cos).nazwa_firmy,20); //wrzucanie i wyrzucanie danych ze struktury dynamicznej na dwa sposoby
    cout << cos->nazwa_firmy;
    return 0;
}
