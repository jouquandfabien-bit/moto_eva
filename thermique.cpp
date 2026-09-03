#include "Thermique.h"

Thermique::Thermique(int puissance, float cylindree) : Moteur(puissance), cylindree(cylindree) {}

Thermique::~Thermique() {}

float Thermique::getCylindree() const {
    return cylindree;
}

void Thermique::setCylindree(float newCylindree) {
    cylindree = newCylindree;
}
