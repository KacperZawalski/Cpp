#include <iostream>

using namespace std;

int main()
{
    cout << "Podawaj liczby a ja je zsumuje!\nPodanie 0 konczy wczytywanie\n";
    int var;
    int sum = 0;
    cout << "Podaj liczbe: ";
    cin >> var;
    while (var!=0)
    {
        sum+=var;
        cout << "Suma: " << sum << endl;
        cout << "Podaj liczbe: ";
        cin >> var;
    }
    return 0;
}
