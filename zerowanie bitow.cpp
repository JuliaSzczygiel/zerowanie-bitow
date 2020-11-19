#include <iostream>
#include <bitset>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <string.h>

using namespace std;

int zerujBit(int liczba, int nrBitu) {
    return ((~(0b1 << nrBitu)) & liczba);
}


int main()
{
    ifstream file;
    ofstream output_file;
    file.open("liczby.txt");
    output_file.open("nrBitu.txt");
 
    int liczba1, liczba2;

    if (file.good())
    {
        while (!file.eof()) 
        {
            file >> liczba1 >> liczba2;
            output_file << zerujBit(liczba1, liczba2) << endl;
            cout << zerujBit(liczba1, liczba2) << endl;
        }

    }

    file.close();
    output_file.close();

    return 0;
}