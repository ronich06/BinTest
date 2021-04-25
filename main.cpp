#include <iostream>
#include <vector>
#include "Bus.h"
#include "Passanger.h"
#include "ReserveManager.h"
#include "BusManager.h"
#include "PassangerManager.h"
using namespace std;


int main() {
    ReserveManager reserveManager;
    BusManager busManager;
    PassangerManager passangerManager;
    Bus* bus1  = new Bus("dad","dad","dad","dad",10);
    Bus* bus2  = new Bus("dad","dad","dad","dad",20);

    Passanger* passanger1 = new Passanger("PEPE");
    Passanger* passanger2 = new Passanger("Pablo");

    busManager.addBus(bus1);
    busManager.addBus(bus2);

    passangerManager.addPassanger(passanger1);
    passangerManager.addPassanger(passanger2);


    //cout<<passangerManager.getPassangerList()[2]->toString();

    reserveManager.agregarPasajero(busManager.getBusList(),passangerManager.getPassangerList());


    for(int j = 0; j < busManager.getBusList().size();j++){
        cout<<"Bus: "<< j+1<<endl;
        for(int i=0;i<busManager.getBusList()[j]->getPassangerList().size();i++) {
            cout<<"Pasajero: "<< i+1<<endl;
            cout << busManager.getBusList()[j]->getPassangerList()[i].toString();
        }}
   /* for(int i=0;i<busManager.getBusList().size();i++){
        cout<<busManager.getBusList().data()[i]->toString();
    }*/

    return 0;
}
