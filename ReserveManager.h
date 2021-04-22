//
// Created by Roni on 4/21/2021.
//

#ifndef UNTITLED1_RESERVEMANAGER_H
#define UNTITLED1_RESERVEMANAGER_H
#include "Bus.h"
#include <iostream>
#include <vector>
using namespace std;

class ReserveManager {
public:
    void agregarPasajero(vector<Bus>,Passanger*);
    void agregarGrupoDePasajeros(vector<Bus>,Passanger*);
    string mostrarDetallePasajeros(vector<Bus>);

};


#endif //UNTITLED1_RESERVEMANAGER_H
