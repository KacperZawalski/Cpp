#include <iostream>
#include <windows.h>
using namespace std;
class clicker
{
public:
    void click(int jak_czesto)
    {
        int x = 1000/jak_czesto;
        int at1, at2;
        while (GetAsyncKeyState(VK_CONTROL))
        {
            while (GetAsyncKeyState(VK_F6))
            {
                while (!GetAsyncKeyState(VK_F7))
                {
                    Sleep(x);
                    mouse_event(MOUSEEVENTF_LEFTDOWN, at1, at2, 0, 0);
                    mouse_event(MOUSEEVENTF_LEFTUP, at1, at2, 0, 0);
                }
            }
        }
    }
    int wprowadz(void)
    {
        int x;
        cout << "Ile razy na sekunde clicker ma klikac?" << endl;
        cin >> x;
        return x;
    }
private:

};
int main()
{
    clicker kliker;
    kliker.click(kliker.wprowadz());
    return 0;
}
