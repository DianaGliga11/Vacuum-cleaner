//
// Created by Diana on 6/2/2024.
//

#ifndef PROBLEMAOOP_ASPIRATOR_INCAPERE_H
#define PROBLEMAOOP_ASPIRATOR_INCAPERE_H
#include<string>
#include<iostream>
using namespace std;

class Incapere {
private:
    int timp;
    string incapere;
    string mod;
public:
    Incapere();
    ~Incapere();
    Incapere(int t, string i, string m);
    int getConsumBatt();
    string getMod();
    int getTimp();
    string getNume();
    bool operator==(Incapere& i);
    friend ostream& operator<<(ostream &os,Incapere& i) ;
};


#endif //PROBLEMAOOP_ASPIRATOR_INCAPERE_H
