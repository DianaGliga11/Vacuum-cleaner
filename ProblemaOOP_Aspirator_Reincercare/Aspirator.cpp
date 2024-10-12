//
// Created by Diana on 6/2/2024.
//

#include "Aspirator.h"

Aspirator::Aspirator() {
    battCap = 0;

}

Aspirator::~Aspirator() {
    battCap = 0;

}

Aspirator::Aspirator(const Aspirator &a) {
    battCap = a.battCap;
    incaperi = a.incaperi;
}

int Aspirator::getBattCap() {
    return battCap;
}

vector<Incapere> Aspirator::getIncaperi() {
    return incaperi;
}

void Aspirator::setBattCap(int b) {
    battCap = b;
}

bool Aspirator::operator==(Aspirator &a) {
    bool ok = false;
    for(int i=0;i<incaperi.size();i++){
        if(incaperi[i] == a.incaperi[i])
            ok = true;
        else {
            ok = false;
            break;
        }
    }
    return ((battCap==a.battCap) && ok);
}

Aspirator &Aspirator::operator=(const Aspirator &a) {
    if(this==&a)
        return *this;
    battCap = a.battCap;
    incaperi = a.incaperi;
    return *this;
}

ostream &operator<<(ostream &os, Aspirator &a) {
    os<<a.battCap<<" ";
    for( auto & i : a.incaperi)
        os<<i<<" ";
    os<<endl;
    return os;
}
