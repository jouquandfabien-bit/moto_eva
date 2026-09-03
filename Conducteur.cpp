#include "Conducteur.h"
#include <sstream>
#include <algorithm> // Pour std::find

Conducteur::Conducteur(std::string nom, std::string prenom, int anneeNaissance)
    : nom(nom), prenom(prenom), anneeNaissance(anneeNaissance) {}

Conducteur::~Conducteur() {
    // On vide juste la liste. On ne fait PAS de "delete" car c'est une agrégation
    // (le conducteur ne possède pas la mémoire des motos).
    mesMotos.clear();
}

std::string Conducteur::getNom() const { return nom; }
std::string Conducteur::getPrenom() const { return prenom; }
int Conducteur::getAnneeNaissance() const { return anneeNaissance; }

void Conducteur::addMoto(Moto* newMoto) {
    if (newMoto != nullptr) {
        mesMotos.push_back(newMoto);
    }
}

void Conducteur::rmMoto(Moto* motoToRemove) {
    // Cherche la moto dans le vecteur et la supprime si elle est trouvée
    auto it = std::find(mesMotos.begin(), mesMotos.end(), motoToRemove);
    if (it != mesMotos.end()) {
        mesMotos.erase(it);
    }
}

std::string Conducteur::toString() const {
    std::stringstream ss;
    ss << "Conducteur: " << prenom << " " << nom << " (Né en " << anneeNaissance << ")\n";
    ss << "Motos :\n";
    
    if (mesMotos.empty()) {
        ss << "  - Aucune moto.\n";
    } else {
        for (Moto* moto : mesMotos) {
            ss << "  - " << moto->toString() << "\n";
        }
    }
    return ss.str();
}