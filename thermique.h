#ifndef THERMIQUE_H
#define THERMIQUE_H

#include "Moteur.h"

/**
 * @class Thermique
 * @brief Classe représentant un moteur thermique (hérite de Moteur).
 */
class Thermique : public Moteur {
private:
    float cylindree;

public:
    Thermique(int puissance, float cylindree);
    ~Thermique();

    float getCylindree() const;
    void setCylindree(float newCylindree);
};

#endif
