#ifndef CONDUCTEUR_H
#define CONDUCTEUR_H

#include <string>
#include <vector>
#include "Moto.h"

/**
 * @class Conducteur
 * @brief Classe représentant un conducteur (Agrégation avec Moto).
 */
class Conducteur {
private:
    std::string nom;
    std::string prenom;
    int anneeNaissance;
    std::vector<Moto*> mesMotos; // Agrégation : pointeurs vers des motos existantes

public:
    Conducteur(std::string nom, std::string prenom, int anneeNaissance);
    
    /**
     * @brief Destructeur. Ne détruit PAS les motos (principe de l'agrégation).
     */
    ~Conducteur();

    std::string getNom() const;
    std::string getPrenom() const;
    int getAnneeNaissance() const;

    void addMoto(Moto* newMoto);
    void rmMoto(Moto* motoToRemove);
    
    std::string toString() const;
};

#endif