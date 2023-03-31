#pragma once
#include <string>
#include <iostream>
using namespace std;

class land_transport
{
public:

	land_transport();
	virtual ~land_transport();
	land_transport(string color);
	land_transport(string color, string state);

	virtual void drive() = 0;
	virtual void ChekTransport();
protected:
	string color, state;
};

class wheel : public virtual land_transport {
public:
	wheel(string tunning);
	~wheel() override;
	void drive() override;
	void ChekTransport() override;
	void appearance();
protected:
	string tunning;
};

class jet_nozzle : public virtual land_transport {
public:
	jet_nozzle(string flame_color);
	~jet_nozzle() override;
	void drive() override;
	void ChekTransport() override;
	void sound();
protected:
	string flame_color;
};

class caterpillar : public virtual land_transport {
public:
	caterpillar(string canavas);
	~caterpillar() override;
	void drive() override;
	void ChekTransport() override;
	void sound();
protected:
	string canavas;
};

class tank_with_rocket : public jet_nozzle, public caterpillar {
public:
	tank_with_rocket();
	~tank_with_rocket() override;
	void drive() override;
	void ChekTransport() override;
	void Shoot();
};

class rapid_car_with_jet_nozzle : public jet_nozzle, public wheel {
public:
	rapid_car_with_jet_nozzle();
	~rapid_car_with_jet_nozzle() override;
	void drive() override;
	void ChekTransport()override;
	void sound();
};