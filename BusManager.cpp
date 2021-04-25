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

string BusManager::toString() {
    stringstream s;
    for(int i=0; i < busList.size(); i++){
        s<<"Bus: #"<<i<<endl;
        s<<busList[1]->toString();
    }
    return s.str();
}

Bus *BusManager::createBus(string brand, string model, string color, string driverName, int sitCapacity) {
    return new Bus(brand,model,color,driverName, sitCapacity);
}


