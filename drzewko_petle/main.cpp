#include <iostream>

using namespace std;
void drzewko(void);
int main()
{
   drzewko();
    return 0;
}

void drzewko(void)
{
    int d=0;
    for (int a=1;a<4;a++)
    {
        for (int b=1;b<=a+1;b++)
        {
            for (int j=4+a-b+d;j>0;j--)
            {
                cout << " ";
            }
            for (int i=1;i<b*2;i++)
            {
                cout<< "*";
            }
            cout << endl;
        }
        d--;
    }
}
