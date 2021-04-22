//
// Created by Roni on 4/21/2021.
//

#include "ReserveManager.h"
void ReserveManager::agregarPasajero(vector<Bus> vectorBuses,Passanger* passanger) {
    for (int i = 0; i <= vectorBuses.size(); i++) {
        int Maxsize = (vectorBuses[i].getSitCapacity()) / 2;
        if (vectorBuses[i].getPassangerList().size() < Maxsize) {
            vectorBuses[i].addPassanger(passanger);
            vectorBuses[i].addPassanger(passanger);
            cout<<vectorBuses[i].getPassangerList().size()<<endl;
            //vectorBuses.data()[i].getPassangerList().resize(6);
            cout<<vectorBuses[i].getPassangerList().size()<<endl;
            break;
        }
    }
    cout<<vectorBuses.data()[0].getPassangerList().size()<<endl;
}
void ReserveManager::agregarGrupoDePasajeros(vector<Bus> vectorBuses, Passanger* passanger1){

}
string ReserveManager::mostrarDetallePasajeros(vector<Bus> vectorBUses){

}