//
// Created by dell on 25/4/2021.
//

#include "Person.h"

Person::Person(const string &name) : name(name) {}

Person::~Person() {

}

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

string Person::toString() {
    stringstream s;
    s<<"Name: "<<getName()<<endl;
return s.str();
}
