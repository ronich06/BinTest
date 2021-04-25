//
// Created by dell on 25/4/2021.
//

#ifndef UNTITLED1_PERSON_H
#define UNTITLED1_PERSON_H
#include <iostream>
#include <sstream>
using namespace std;

class Person {
    string name;
public:
    Person()= default;
    Person(const string &name);
    ~Person();
    const string &getName() const;
    void setName(const string &name);
   string toString();
};


#endif //UNTITLED1_PERSON_H
