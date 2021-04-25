//
// Created by Roni on 4/25/2021.
//

#ifndef UNTITLED1_PASSANGERMANAGER_H
#define UNTITLED1_PASSANGERMANAGER_H
#include <iostream>
#include <vector>
#include "Passanger.h"

class PassangerManager{
    vector<Passanger*> passangerList;
public:
    PassangerManager()=default;
    void addPassanger(Passanger*);

    const vector<Passanger *> &getPassangerList() const;
};

#endif //UNTITLED1_PASSANGERMANAGER_H