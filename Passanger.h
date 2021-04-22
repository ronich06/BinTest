//
// Created by Roni on 4/21/2021.
//

#ifndef UNTITLED1_PASSANGER_H
#define UNTITLED1_PASSANGER_H
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

class Passanger {
    string name;
public:
    Passanger();

    Passanger(string);

    virtual ~Passanger();

    const string &getName() const;

    void setName(const string &name);

    string toString();
};


#endif //UNTITLED1_PASSANGER_H
