//
// Created by Roni on 4/25/2021.
//

#include "PassangerManager.h"

void PassangerManager::addPassanger(Passanger* passanger ) {
    passangerList.push_back(passanger);

}


const vector<Passanger *> &PassangerManager::getPassangerList() const {
    return passangerList;
}
