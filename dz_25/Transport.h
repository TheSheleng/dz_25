#pragma once
#include <iostream>

using namespace std;

class Transport
{
protected:
	const double consumption;

public:
	Transport(double _c = 0U);
	virtual void Print() = 0;
};

class Airplane : public Transport
{
public:
	Airplane(int passengers);
	void Print() override;
};

class Bike : public Transport
{
public:
	Bike();
	void Print() override;
};

class Jeep : public Transport
{
public:
	Jeep();
	void Print() override;
};

class Vessel : public Transport
{
public:
	Vessel();
	void Print() override;
};

class Truck : public Transport
{
public:
	Truck();
	void Print() override;
};