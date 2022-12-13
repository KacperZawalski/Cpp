#ifndef TIMER_H
#define TIMER_H
#include <windows.h>
#include <iostream>
using namespace std;
class timer
{
    public:
        timer();
        void start(void)
        {
            int minuty=0;
            for(int i=0;true;i+=1)
            {
                if (i==60)
                {
                    minuty++;
                    i=0;
                }
                system("cls");
                cout << minuty << ":" << i;
                Sleep(1000);

            }
        }
};

#endif // TIMER_H
