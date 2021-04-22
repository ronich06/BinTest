//
// Created by dell on 21/4/2021.
//

#include "BusManager.h"

void BusManager::addBus(Bus *bus) {
    busList.push_back(bus);


}

const vector<Bus *> &BusManager::getBusList() const {
    return busList;
}


