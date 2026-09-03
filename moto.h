#ifndef MOTO_H
#define MOTO_H

#include <string>
#include "Moteur.h"

/**
 * @class Moto
 * @brief Classe représentant une moto composée d'un Moteur.
 */
class Moto {
private:
    int poids;
    std::string couleur;
    std::string nom;
    Moteur* moteur; // Composition : la Moto possède son Moteur

public:
    Moto(Moteur* moteur, std::string couleur, std::string nom = "", int poids = 0);
    ~Moto();

    int getPoids() const;
    void setPoids(int poids);
    std::string getCouleur() const;
    Moteur* getMoteur() const;
    
    float getAcceleration() const;
    std::string toString() const;
};

#endif