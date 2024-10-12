#include <iostream>
#include "Aspirator.h"
#include "Repo.h"
#include "Service.h"
#include "UI.h"
#include "Teste.h"

int main() {
    Repo<Aspirator> r;
    Incapere i1(10, "dormitor", "rapid");
    Incapere i2(11, "debara", "rapid");
    Incapere i3(20, "baie", "minutios");
    Incapere i4(17, "bucatarie", "mediu");
    Incapere i5(9, "living", "rapid");
    vector<Incapere> v = {i1, i2, i3, i4, i5};
    Aspirator as(60, v);
    r.addEntity(as);
    Service s(r);
    UI ui(s);
    ui.run();
    return 0;
}
