#include "Land_transport.h"

void f1(land_transport& transport) {
	transport.ChekTransport();
	transport.drive();
}

int main() {
	
	//instances
	land_transport* pld;
	wheel w("cool");
	caterpillar c("cool");
	jet_nozzle jn("blue");
	tank_with_rocket tr;
	rapid_car_with_jet_nozzle rc;
	//work methods
	w.appearance();
	w.ChekTransport();
	w.drive();
	cout << "-------------------------------" << endl;
	c.sound();
	c.ChekTransport();
	c.drive();
	cout << "-------------------------------" << endl;
	jn.sound();
	jn.ChekTransport();
	jn.drive();
	cout << "-------------------------------" << endl;
	tr.ChekTransport();
	tr.drive();
	tr.Shoot();
	cout << "-------------------------------" << endl;
	rc.ChekTransport();
	rc.drive();
	rc.sound();
	cout << "-------------------------------" << endl;
	//polimorphic behavior
	pld = new rapid_car_with_jet_nozzle;
	f1(*pld);
	delete pld;
	cout << "-------------------------------" << endl;
	pld = new tank_with_rocket;
	f1(*pld);
	delete pld;
	
	return 0;
}
 
