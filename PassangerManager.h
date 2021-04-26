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

     vector<Passanger *> &getPassangerList();
};

#endif //UNTITLED1_PASSANGERMANAGER_H
