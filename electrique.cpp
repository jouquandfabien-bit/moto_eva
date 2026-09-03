#include "Electrique.h"

Electrique::Electrique(int puissance, float tensionMax) : Moteur(puissance), tensionMax(tensionMax) {}

Electrique::~Electrique() {}

float Electrique::getTensionMax() const {
    return tensionMax;
}

void Electrique::setTensionMax(float tension) {
    tensionMax = tension;
}
