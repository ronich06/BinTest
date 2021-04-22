//
// Created by Roni on 4/21/2021.
//

#include "Bus.h"

Bus::Bus()= default;

Bus::Bus(string brand, string model, string color, string driverName, int sitCapacity) {
    this->brand = brand;
    this->model = model;
    this->color = color;
    this->driverName = driverName;
    this->sitCapacity = sitCapacity;
}

const string &Bus::getBrand() const {
    return brand;
}

void Bus::setBrand(const string &brand) {
    Bus::brand = brand;
}

const string &Bus::getModel() const {
    return model;
}

void Bus::setModel(const string &model) {
    Bus::model = model;
}

const string &Bus::getColor() const {
    return color;
}

void Bus::setColor(const string &color) {
    Bus::color = color;
}

const string &Bus::getDriverName() const {
    return driverName;
}

void Bus::setDriverName(const string &driverName) {
    Bus::driverName = driverName;
}

Bus::~Bus()=default;

void Bus::addPassanger(Passanger* passanger){
    passangerList.push_back(* passanger);
}

vector<Passanger> Bus::getPassangerList(){
  return passangerList;
}

string Bus::toString(){
    stringstream out;
    out<<"Brand"<<getBrand()<<endl;
    out<<"Model"<<getModel()<<endl;
    out<<"Color"<<getColor()<<endl;
    out<<"Sitting capacity: "<<getSitCapacity()<<endl;
    out<<"Driver's name"<<getDriverName()<<endl;

    out.str();
}

int Bus::getSitCapacity() const {
    return sitCapacity;
}

void Bus::setSitCapacity(int sitCapacity) {
    Bus::sitCapacity = sitCapacity;
}
