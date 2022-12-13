#include <iostream>

using namespace std;
struct batonik {
    int waga;
    int kalorie;
    string marka;
};
int main()
{
    batonik baton[3] = {3,200,"szop",2,100,"szopel",4,150,"nie szop"};
    cout << baton[0].kalorie;
    return 0;
}
