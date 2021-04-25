//
// Created by Roni on 4/21/2021.
//

#ifndef UNTITLED1_PASSANGER_H
#define UNTITLED1_PASSANGER_H
#include "Person.h"

class Passanger:public Person {
public:
    Passanger()= default;

    Passanger(const string &name);

    virtual ~Passanger();

};


#endif //UNTITLED1_PASSANGER_H
