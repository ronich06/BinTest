//
// Created by Roni on 4/21/2021.
//

#include "Passanger.h"
Passanger::Passanger() = default;

Passanger::Passanger(string name) {
    this->name = name;
}

Passanger::~Passanger() = default;

const string &Passanger::getName() const {
    return name;
}

void Passanger::setName(const string &name) {
    Passanger::name = name;
}
string Passanger::toString() {
    stringstream out;
    out<<"Name: "<<getName()<<endl;

    return out.str();
}