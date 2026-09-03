#ifndef ELECTRIQUE_H
#define ELECTRIQUE_H

#include "Moteur.h"

/**
 * @class Electrique
 * @brief Classe représentant un moteur électrique (hérite de Moteur).
 */
class Electrique : public Moteur {
private:
    float tensionMax;

public:
    Electrique(int puissance, float tensionMax);
    ~Electrique();

    float getTensionMax() const;
    void setTensionMax(float tension);
};

#endif
