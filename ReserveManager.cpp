//
// Created by Roni on 4/21/2021.
//

#include "ReserveManager.h"
void ReserveManager::agregarPasajero(vector<Bus*> vectorBuses,Passanger* passanger) {
   // for (int i = 0; i <= vectorBuses.size(); i++) {
       // int Maxsize = (vectorBuses.data()[0].getSitCapacity()) / 2;
    vectorBuses[0]->addPassanger(passanger);
    cout<<vectorBuses[0]->getPassangerList().size()<<endl;// 1
    //    if (vectorBuses.data()[0].getPassangerList().size() < Maxsize) {
      //      vectorBuses.data()[0].addPassanger(passanger);
           // cout<<vectorBuses.data()[i].getPassangerList().size()<<endl;
            //vectorBuses.data()[i].getPassangerList().resize(6);
           // cout<<vectorBuses.data()[i].getPassangerList().size()<<endl;
          //  break;
     //   }
   // }
    //cout<<vectorBuses.data()[0].getPassangerList().size()<<endl;
}
void ReserveManager::agregarGrupoDePasajeros(vector<Bus> vectorBuses, Passanger* passanger1){

}
string ReserveManager::mostrarDetallePasajeros(vector<Bus> vectorBUses){

}