#ifndef MOTEUR_H
#define MOTEUR_H

/**
 * @class Moteur
 * @brief Classe mère représentant un moteur.
 */
class Moteur {
private:
    int _puissance;

public:
    /**
     * @brief Constructeur
     * @param puissance Puissance du moteur en watts
     */
    Moteur(int puissance = 0);

    /**
     * @brief Destructeur virtuel (évite les fuites mémoire avec l'héritage)
     */
    virtual ~Moteur();

    /**
     * @brief Getter pour la puissance
     * @return Puissance du moteur
     */
    int getPuissance() const;

    /**
     * @brief Setter pour la puissance
     * @param puissance Nouvelle puissance
     */
    void setPuissance(int puissance);
};

#endif
