#include <iostream>
#include <vector>
#include "Bus.h"
#include "Passanger.h"
#include "ReserveManager.h"
#include "BusManager.h"
using namespace std;


int main() {
    ReserveManager reserveManager;
    BusManager busManager;
    Bus* bus1  = new Bus("dad","dad","dad","dad",40);
    Bus* bus2  = new Bus("dad","dad","dad","dad",20);

    Passanger* passanger1 = new Passanger("PEPE");
    Passanger* passanger2 = new Passanger("Pablo");

    busManager.addBus(bus1);
    busManager.addBus(bus2);

    reserveManager.agregarPasajero(busManager.getBusList(),passanger1);
    cout<<"Main"<<endl;
    cout<<busManager.getBusList().data()[0]->getPassangerList().size()<<endl;
    reserveManager.agregarPasajero(busManager.getBusList(),passanger2);
    cout<<"Main"<<endl;
    cout<<busManager.getBusList().data()[0]->getPassangerList().size()<<endl;

    cout<<busManager.getBusList()[0]->getPassangerList()[2].toString();



    return 0;
}
