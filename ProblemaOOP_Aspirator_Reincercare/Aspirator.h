//
// Created by Diana on 6/2/2024.
//

#ifndef PROBLEMAOOP_ASPIRATOR_ASPIRATOR_H
#define PROBLEMAOOP_ASPIRATOR_ASPIRATOR_H
#include<string>
#include<iostream>
#include <vector>
#include "Incapere.h"

using namespace std;


class Aspirator {
private:
    int battCap;
    vector<Incapere> incaperi;
public:
    Aspirator();
    ~Aspirator();
    Aspirator(int b, vector<Incapere> vec): battCap(b), incaperi(vec){};
    Aspirator(const Aspirator& a);
    int getBattCap();
    vector<Incapere> getIncaperi();
    void setBattCap(int b);
    void setIncaperi(vector<Incapere> inc){
        incaperi = inc;
    }
    bool operator==(Aspirator& a);
    Aspirator& operator=(const Aspirator& a);
    friend ostream & operator<<(ostream& os, Aspirator& a);
};


#endif //PROBLEMAOOP_ASPIRATOR_ASPIRATOR_H
