#include <iostream>

using namespace std;

int main()
{
    int linecounter;
    linecounter = 1;

    if (linecounter == 1)
    {
        cout << "*********" << endl;
          linecounter = linecounter + 1;
    }

    while ( linecounter >= 2 && linecounter <= 8 )
    {
        cout << "*       *" << endl;
        linecounter = linecounter + 1;
    }

    if ( linecounter == 9 )
    {
        cout << "*********" << endl;
    }
    return 0;
}
