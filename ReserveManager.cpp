//
// Created by Roni on 4/21/2021.
//

#include "ReserveManager.h"
void ReserveManager::agregarPasajero(vector<Bus*> vectorBuses,vector<Passanger*> vectorPassanger) {
    Passanger* covidSpace = new Passanger("Covid sit");
    for (int i = 0; i < vectorBuses.size(); i++) {
            if (vectorPassanger.size() + 1 <= vectorBuses.data()[i]->getSitCapacity() - vectorBuses.data()[i]->getPassangerList().size() || vectorPassanger.size() == vectorBuses.data()[i]->getSitCapacity() ) {
                for (int j = 0; j < vectorPassanger.size(); j++) {
                vectorBuses.data()[i]->addPassanger(vectorPassanger.data()[j]);
            }
                if(vectorPassanger.size() != vectorBuses.data()[i]->getSitCapacity()){
                vectorBuses.data()[i]->addPassanger(covidSpace);}
                break;
        }
    }

}

string ReserveManager::mostrarDetallePasajeros(vector<Bus> vectorBUses){
return "hola";
}