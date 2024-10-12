//
// Created by Diana on 6/2/2024.
//

#ifndef PROBLEMAOOP_ASPIRATOR_SERVICE_H
#define PROBLEMAOOP_ASPIRATOR_SERVICE_H


#include <vector>
#include "Aspirator.h"
#include "Repo.h"

class Service {
private:
    Repo<Aspirator> repo;
public:
    Service();
    ~Service();
    Service(Repo<Aspirator> &r);
    void eliminareIncapere(string& incapere);
    vector<Incapere> sortConsumBaterie();
    vector<Incapere> programareOrdine();
    vector<string> modTimp(string mod, int n);
};


#endif //PROBLEMAOOP_ASPIRATOR_SERVICE_H

