//
// Created by dell on 21/4/2021.
//

#ifndef UNTITLED1_BUSMANAGER_H
#define UNTITLED1_BUSMANAGER_H

#include <iostream>
#include <vector>
#include "Bus.h"

class BusManager{
    vector<Bus*> busList;
public:
    BusManager()=default;
    void addBus(Bus* bus);

    const vector<Bus *> &getBusList() const;
};


#endif //UNTITLED1_BUSMANAGER_H
