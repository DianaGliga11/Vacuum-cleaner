//
// Created by Diana on 6/2/2024.
//

#include "Service.h"
#include<algorithm>

Service::Service() {

}

Service::~Service() {

}

Service::Service(Repo<Aspirator> &r) {
    repo = r;
}

void Service::eliminareIncapere(string& incapere) {
    vector<Aspirator> aspiratoare = repo.getAll();
    for (auto& aspirator : aspiratoare) {
        vector<Incapere> incaperi = aspirator.getIncaperi();
        incaperi.erase(remove_if(incaperi.begin(), incaperi.end(), [&incapere]( Incapere& i) {
            return i.getNume() == incapere;
        }), incaperi.end());
        aspirator.setIncaperi(incaperi);
    }
    for (size_t i = 0; i < aspiratoare.size(); ++i) {
        repo.updateEntity(repo.getAll()[i], aspiratoare[i]);
    }
}

vector<Incapere> Service::sortConsumBaterie() {
    if (repo.getAll().empty()) {
        return {};
    }
    vector<Incapere> inc = repo.getAll()[0].getIncaperi();
    std::sort(inc.begin(), inc.end(), [](Incapere& a, Incapere& b) {
        return a.getConsumBatt() < b.getConsumBatt();
    });
    return inc;
}


vector<Incapere> Service::programareOrdine() {
    vector<Incapere> inc = sortConsumBaterie();
    vector<Incapere> rez;
    if (repo.getAll().empty()) {
        return rez;
    }
    int battCap = repo.getAll()[0].getBattCap();
    int remainingBatt = battCap;

    for (auto& j : inc) {
        if (remainingBatt - j.getConsumBatt() >= battCap * 0.1) {
            rez.push_back(j);
            remainingBatt -= j.getConsumBatt();
        } else {
            break;
        }
    }
    return rez;
}

vector<string> Service::modTimp(string mod, int n) {
    vector<Aspirator> as = repo.getAll();
    vector<Incapere> inc ;
    vector<string> rez;
    for(auto &i: as){
        inc = i.getIncaperi();
    }
    for(auto &j: inc){
        if(j.getMod() == mod && j.getTimp() > n)
            rez.push_back(j.getNume());
    }
    return rez;
}
