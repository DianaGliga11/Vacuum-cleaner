//
// Created by Diana on 6/2/2024.
//

#include <iostream>
using namespace std;
#include "UI.h"
void UI::menu() {
    cout << "==== MENIU ====\n";
    cout << "1. Sterge incaperee\n";
    cout << "2. Programneaza ordine a.i. sa fie curatate maximul de camere\n";
    cout << "3. Incaperi pe un anumit mod cu un timp mai mare decat cel introdus\n";
    cout << "0. Exit\n";
}


void UI::run() {
    int option = 1;
    while (option != 0) {
        menu();
        cout << "Alege o optiune: ";
        cin >> option;
        switch (option) {
            case 1:
                stergeIncapere();
                break;
            case 2:
                programeazaOrdine();
                break;
            case 3:
                modTimp();
                break;
            case 0:
                break;
            default:
                cout << "Optiune invalida!\n";
                break;
        }
    }
}

UI::UI() {

}

UI::~UI() {

}

UI::UI(Service &ser) {
    s=ser;
}

void UI::stergeIncapere() {
    string incapere;
    cout<<"Introduceti numele incaperii: ";
    cin>>incapere;
    s.eliminareIncapere(incapere);
}

void UI::programeazaOrdine() {
    vector<Incapere> rez = s.programareOrdine();
    for( auto& i: rez){
        cout<< i<< endl;
    }

}

void UI::modTimp() {
    string mod;
    int n;
    cout<< "Introduceti modul: ";
    cin>>mod;
    cout<<"Introduceti timpul minim: ";
    cin>>n;
    vector<string> rez = s.modTimp(mod, n);
    for(auto & i: rez){
        cout<< i <<endl;
    }
}
