#include "Transport.h"

Transport::Transport(double _c) : consumption(_c) {}
void Transport::Print()
{
	cout << "Tranport fuel consumption: " << consumption << endl;
};

//----------------------------------------------

Airplane::Airplane(int passengers) : Transport(4.73 * passengers) {}

void Airplane::Print()
{
	cout << "Airplane fuel consumption: " << consumption << endl;
}

Bike::Bike() : Transport() {}

void Bike::Print()
{
	cout << "Bike fuel consumption: " << consumption << endl;
}

Jeep::Jeep() : Transport(13.85) {}

void Jeep::Print()
{
	cout << "Jeep fuel consumption: " << consumption << endl;
}

Vessel::Vessel() : Transport(23.53) {}

void Vessel::Print()
{
	cout << "Vessel fuel consumption: " << consumption << endl;
}

Truck::Truck() : Transport(25.4) {}

void Truck::Print()
{
	cout << "Truck fuel consumption: " << consumption << endl;
}