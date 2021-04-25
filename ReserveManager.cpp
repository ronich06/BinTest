//
// Created by Roni on 4/21/2021.
//

#include "ReserveManager.h"
void ReserveManager::agregarPasajero(vector<Bus*> vectorBuses,vector<Passanger*> vectorPassanger) {

    for (int i = 0; i < vectorBuses.size(); i++) {
        int Maxsize = (vectorBuses.data()[i]->getSitCapacity()) / 2;
        for (int j = 0; j < vectorPassanger.size(); j++) {
            if (vectorPassanger.size() + 1 <= Maxsize - vectorBuses.data()[i]->getPassangerList().size()) {
                vectorBuses.data()[i]->addPassanger(vectorPassanger.data()[j]);

            }
        }break;
    }
}

string ReserveManager::mostrarDetallePasajeros(vector<Bus> vectorBUses){
return "hola";
}