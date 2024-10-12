//
// Created by Diana on 6/2/2024.
//

#ifndef PROBLEMAOOP_ASPIRATOR_UI_H
#define PROBLEMAOOP_ASPIRATOR_UI_H


#include "Service.h"

class UI {
private:
    Service s;
public:
    UI();
    ~UI();
    UI(Service &ser);
    void menu();
    void run();
    void stergeIncapere();
    void programeazaOrdine();
    void modTimp();
};


#endif //PROBLEMAOOP_ASPIRATOR_UI_H
