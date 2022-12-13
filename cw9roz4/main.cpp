#include <iostream>

using namespace std;
struct batonik {
    float waga;
    int kalorie;
    string marka;
};
int main()
{
    batonik * baton = new batonik[3];
    (*baton)={2.5,200,"szop"};
    cout << baton->kalorie;
    return 0;
}
