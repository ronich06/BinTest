//
// Created by Roni on 4/25/2021.
//

#include "PassangerManager.h"

void PassangerManager::addPassanger(Passanger* passanger ) {
    passangerList.push_back(passanger);

}


 vector<Passanger *> &PassangerManager::getPassangerList() {
    return passangerList;
}
