#include "Moto.h"
#include <sstream>

Moto::Moto(Moteur* moteur, std::string couleur, std::string nom, int poids)
    : moteur(moteur), couleur(couleur), nom(nom), poids(poids) {}

Moto::~Moto() {
    delete moteur; // Composition : détruit le Moteur associé pour éviter les fuites mémoire
}

int Moto::getPoids() const {
    return poids;
}

void Moto::setPoids(int p) {
    poids = p;
}

std::string Moto::getCouleur() const {
    return couleur;
}

Moteur* Moto::getMoteur() const {
    return moteur;
}

float Moto::getAcceleration() const {
    if (poids <= 0 || moteur == nullptr) return 0.0f;
    
    // Convertir 50 km/h en m/s (50 / 3.6 ≈ 13.8889 m/s)
    float vitesseMs = 50.0f / 3.6f;
    
    // Formule : a = P / (m * v)
    return moteur->getPuissance() / (poids * vitesseMs);
}

std::string Moto::toString() const {
    std::stringstream ss;
    ss << "Moto: " << nom << " (Couleur: " << couleur << ", Poids: " << poids 
       << " kg, Acceleration a 50km/h: " << getAcceleration() << " m/s²)";
    return ss.str();
}