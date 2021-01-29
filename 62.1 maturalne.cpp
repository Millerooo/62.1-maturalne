#include <iostream>
#include <fstream>

 
using namespace std;
 
int main()
{
 
    fstream plik;
    plik.open("liczby1.txt");
 
    if(plik.bad())
        return 1;
 
    string str;
    int najwieksza=0;
    int najmniejsza=0;
 
    while(true)
    {
        plik >> str;

        int x = atoi(str.c_str());
 
        if(najwieksza<x)
            najwieksza = x;
 
         else if ( najmniejsza > x)
            {
                najmniejsza = x;
            }
    }
 
    cout << "Najwieksza liczba to: " << najwieksza << endl;
    plik.close();

    return 0;
}
