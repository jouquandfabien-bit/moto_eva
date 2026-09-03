#include "Moteur.h"

Moteur::Moteur(int puissance) : puissance(puissance) {}

Moteur::~Moteur() {}

int Moteur::getPuissance() const {
    return puissance;
}

void Moteur::setPuissance(int p) {
    puissance = p;
}



