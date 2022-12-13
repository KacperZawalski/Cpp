#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <stdlib.h>

using namespace std;

int main()
{
    for(;;)
    {
        char filename[30];
        ifstream inFile;
        char letter;
        int counting=0;

        cout << "Podaj nazwe pliku: ";
        cin >> filename;
        inFile.open(filename);

        if (!inFile.is_open())
        {
            cout << "Blad otwarcia pliku" << endl;
            exit(EXIT_FAILURE);
        }

        while (inFile.good())
        {
            letter = inFile.get();

            if (isalpha(letter))
            {
                counting++;
                while (isalpha(letter))
                {
                    letter = inFile.get();
                }
            }

        }
        cout << "Tekst zawiera: " << counting << " slow." << endl;
        system("pause");
    }
    return 0;
}
