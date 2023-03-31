#include "Land_transport.h"

land_transport::land_transport() {
		/*cout << "base constructor" << endl;*/
		color = "white";
		state = "good";
	}
land_transport::~land_transport() {
	/*cout << "destructor land_transport" << endl;*/
}
land_transport::land_transport(string color) :land_transport() {
		/*cout << "color constructor" << endl;*/
		this->color = color;
}
land_transport::land_transport(string color, string state) : land_transport(color) {
		/*cout << "full constructor" << endl;*/
		this->state = state;
}
void land_transport::ChekTransport() {
		cout << "transport color: " << color << "\ttransportstatus: " << state << endl;
}

wheel::wheel(string tunning) {
		/*cout << "wheel constructor" << endl;*/
		this->tunning = tunning;
}
wheel::~wheel(){
		/*cout << "wheel destructor" << endl;*/
}
void wheel::drive(){
		cout << "Whis this transport can move on roads!" << endl;
}
void wheel::ChekTransport(){
		cout /*<< "transport " << color << "\tstatus: " << state*/ << "wheels tuned: " << tunning << endl;
}
void wheel::appearance() {
		cout << "these wheel are " << tunning << endl;
}

jet_nozzle::jet_nozzle(string flame_color) {
		/*cout << "jet_nozzle constructor" << endl;*/
		this->flame_color = flame_color;
}
jet_nozzle::~jet_nozzle(){
		/*cout << "jet_nozzle destructor" << endl;*/
}
void jet_nozzle::drive(){
		cout << "Wits this mover transport can fly and move fast!" << endl;
}
void jet_nozzle::ChekTransport(){
		cout /*<< "transport " << color << "\tstatus: " << state*/ << "flame color: " << flame_color << endl;
}
void jet_nozzle::sound() {
		cout << "PHHHHHHHHH!!!" << endl;
}

caterpillar::caterpillar(string canavas) {
		/*cout << "caterpillar constructor" << endl;*/
		this->canavas = canavas;
}
caterpillar::~caterpillar(){
		/*cout << "caterpillar destructor" << endl;*/
}
void caterpillar::drive(){
		cout << "Whis this transport can overcome all obstacles!" << endl;
}
void caterpillar::ChekTransport(){
		cout /*<< "transport " << color << "\tstatus: " << state*/ << "caterpillar web: " << canavas << endl;
}
void caterpillar::sound() {
		cout << "WRWRWRWRRWR!!!" << endl;
}

tank_with_rocket::tank_with_rocket() : jet_nozzle("orange"), caterpillar("cool"), land_transport("camouflage", "redy to fight") {
		/*cout << "tank constructor" << endl;*/
}
tank_with_rocket::~tank_with_rocket(){
		/*cout << "tank destructor" << endl;*/
}
void tank_with_rocket::drive(){
		cout << "slow driving..." << endl;
}
void tank_with_rocket::ChekTransport(){
		cout << "tank color: " << color << "\tstatus: " << state << "\tcaterpillar web: " << canavas << "\tstatus gun: ready to shoot" << endl;
}
void tank_with_rocket::Shoot() {
		cout << "BANG!!!" << endl;
}

rapid_car_with_jet_nozzle::rapid_car_with_jet_nozzle() :jet_nozzle("blue"), wheel("cool wheel"), land_transport("red", "good") {
		/*cout << "car constructor" << endl;*/
}
rapid_car_with_jet_nozzle::~rapid_car_with_jet_nozzle(){
		/*cout << "car destructor" << endl;*/
}
void rapid_car_with_jet_nozzle::drive(){
		cout << "break the speed record!!!" << endl;
}
void rapid_car_with_jet_nozzle::ChekTransport(){
		cout << "car: " << color << "\tstatus: " << state << "\tweels tunning: " << tunning << "\tflame color: " << flame_color << endl;
}
void rapid_car_with_jet_nozzle::sound(){
		cout << "NHAUUUUUUUUU!!!" << endl;
}

