#include <iostream>
#include <conio.h>

using namespace std;

#include "Transport.h"

int main()
{
    Transport* transports = nullptr;

    cout << "1-Airplane\n2-Bike\n3-Jeep\n4-Vessel\n5-Truck\n" << endl;
    char butt = _getch();
    switch (butt)
    {
    case '1': transports = new Airplane(40); break;
    case '2': transports = new Bike(); break;
    case '3': transports = new Jeep(); break;
    case '4': transports = new Vessel(); break;
    case '5': transports = new Truck(); break;
    }

    transports->Print();
    delete transports;
}