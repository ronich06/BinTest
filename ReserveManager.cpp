//
// Created by Roni on 4/21/2021.
//

#include "ReserveManager.h"
void ReserveManager::agregarPasajero(vector<Bus*> vectorBuses,Passanger* passanger) {
    for (int i = 0; i <= vectorBuses.size(); i++) {
        int Maxsize = (vectorBuses.data()[0]->getSitCapacity()) / 2;
    cout<<vectorBuses[0]->getPassangerList().size()<<endl;// 1
        if (vectorBuses.data()[0]->getPassangerList().size() < Maxsize) {
            vectorBuses.data()[0]->addPassanger(passanger);
            vectorBuses.data()[0]->addPassanger(passanger);
           // vectorBuses.data()[i]->getPassangerList().resize(vectorBuses.data()[0]->getPassangerList().size() + 1);
            break;
       }
    }

}
void ReserveManager::agregarGrupoDePasajeros(vector<Bus> vectorBuses, Passanger* passanger1){

}
string ReserveManager::mostrarDetallePasajeros(vector<Bus> vectorBUses){

}