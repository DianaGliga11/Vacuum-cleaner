//
// Created by Diana on 6/2/2024.
//

#include "Incapere.h"

Incapere::Incapere() {

}

Incapere::~Incapere() {

}

Incapere::Incapere(int t, string i, string m):
        timp(t), incapere(i), mod(m){}

int Incapere::getConsumBatt() {
    if(mod == "rapid")
        return 2*timp;
    if(mod == "mediu")
        return 5*timp;
    if(mod == "minutios")
        return 10*timp;
}

bool Incapere::operator==(Incapere &i) {
    return ((timp == i.timp) && (mod == i.mod) && (incapere == i.incapere));
}

ostream &operator<<(ostream &os, Incapere &i) {
    os<<i.timp<<" "<<i.incapere<<" "<<i.mod;
    return os;
}

string Incapere::getNume() {
    return incapere;
}

string Incapere::getMod() {
    return mod;
}

int Incapere::getTimp() {
    return timp;
}
