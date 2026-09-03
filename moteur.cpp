#include "Moteur.h"

Moteur::Moteur(int puissance) : _puissance(puissance) {}

Moteur::~Moteur() {}

int Moteur::getPuissance() const {
    return _puissance;
}

void Moteur::setPuissance(int p) {
    _puissance = p;
}



