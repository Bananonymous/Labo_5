/*
-----------------------------------------------------------------------------------
Nom du fichier  : main.cpp
Auteur(s)       : Jonathan Thiébaud, Léon Surbeck
Classe          : PRG1B
Date creation   : 15.11.2022
Description     : Un programme permettant d’identifier tous les nombres premiers dans un intervalle saisi.
Remarque(s)     : -
Compilateur     : Mingw-w64 g++ 12.2.0
-----------------------------------------------------------------------------------
*/

#include "fonctions.h"


int main() {

    const int     COLONNES = 10;
    const int     W = 3;

    size_t        saisieUtilisateur;
    vector<int>   tabPremier;

    cout << "Bienvenue, ce programme vous permettra de trouver les nombres premiers dans un intervalle donne." << endl;

    do{
        //Redemande une saisie tant que la valeure sort de l'intervalle [2,100]
        //Gestion des erreurs de flux
        vector<bool> tabCriblage(saisie(), true);

        //Appel de la fonction de cribage du tableau en fonction des nb premiers
        criblageTableau(tabCriblage);

        cout << "Affichage du tableau post-criblage : " << endl;
        afficherTableau(tabCriblage, W, COLONNES);

        cout << endl << "Voici les nombres premiers : " << endl;
        afficherTableau(vecteurPremiers(tabCriblage), W, COLONNES);

    }while (recommencer());

    //Fin du programme
    cout << "Merci d'avoir utilise le programme"          << endl;
    cout << "Appuyez sur ENTER pour quitter le programme" << endl;

    viderBuffer();

    return EXIT_SUCCESS;
}