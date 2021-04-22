//
// Created by Roni on 4/21/2021.
//

#include "ReserveManager.h"
void ReserveManager::agregarPasajero(vector<Bus*> vectorBuses,Passanger* passanger) {
    for (int i = 0; i < vectorBuses.size(); i++) {
        int Maxsize = (vectorBuses.data()[i]->getSitCapacity()) / 2;
        if (vectorBuses.data()[i]->getPassangerList().size() + 1 < Maxsize) {
            vectorBuses.data()[i]->addPassanger(passanger);
            vectorBuses.data()[i]->addPassanger(passanger);
           // vectorBuses.data()[i]->getPassangerList().resize(vectorBuses.data()[0]->getPassangerList().size() + 1);
            break;
       }
    }

}
void ReserveManager::agregarGrupoDePasajeros(vector<Bus> vectorBuses, Passanger* passanger1){

}
string ReserveManager::mostrarDetallePasajeros(vector<Bus> vectorBUses){

}