#include <iostream>
#include "Conducteur.h"
#include "moto.h"
#include "thermique.h"
#include "electrique.h"

int main() {
    // Étape A : 1 conducteur, 2 motos
    Conducteur c1("Vittet", "Stephane", 1990);
    
    // NB : Les moteurs sont créés avec 'new' car le destructeur de Moto fera le 'delete'
    Moto m1(new Thermique(75000, 1000.0f), "Rouge", "Yamaha R1", 200); 
    Moto m2(new Electrique(50000, 400.0f), "Verte", "Zero SR", 185);

    c1.addMoto(&m1);
    c1.addMoto(&m2);
    
    std::cout << "--- ETAPE A ---\n";
    std::cout << c1.toString() << "\n";

    // Étape B : 2 nouveaux conducteurs, 1 nouvelle moto
    Conducteur c2("neymar", "Jean", 1995);
    Conducteur c3("Tombal", "Pierre", 1988);
    
    Moto m3(new Thermique(35000, 500.0f), "Noir", "Honda CB500", 190);

    // Étape C : Répartition
    c1.rmMoto(&m2); // On enlève la moto 2 du conducteur 1
    c2.addMoto(&m2); // On la donne au conducteur 2
    c3.addMoto(&m3); // On donne la nouvelle moto au conducteur 3

    // Étape D : Affichage final
    std::cout << "--- ETAPE D (Apres repartition) ---\n";
    std::cout << c1.toString() << "\n";
    std::cout << c2.toString() << "\n";
    std::cout << c3.toString() << "\n";

    return 0;
}