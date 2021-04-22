//
// Created by Roni on 4/21/2021.
//

#ifndef UNTITLED1_BUS_H
#define UNTITLED1_BUS_H
#include <iostream>
#include <vector>
#include <sstream>
#include "Passanger.h"
using namespace std;

class Bus {
    string brand;
    string model;
    string color;
    string driverName;
    int sitCapacity;
    vector<Passanger> passangerList;
public:
    Bus();

    Bus(string,string,string,string,int);

    virtual ~Bus();

    const string &getBrand() const;

    void setBrand(const string &brand);

    const string &getModel() const;

    void setModel(const string &model);

    const string &getColor() const;

    void setColor(const string &color);

    const string &getDriverName() const;

    void setDriverName(const string &driverName);

    int getSitCapacity() const;

    void setSitCapacity(int sitCapacity);

    void addPassanger(Passanger*);

    vector<Passanger> getPassangerList();

    string toString();
};


#endif //UNTITLED1_BUS_H
