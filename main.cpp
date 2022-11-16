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

    //Constantes
    const int     COLONNES = 10;
    const int     W = 3;

    //Variables
    vector<int>   tabPremier;

    cout << "Bienvenue, ce programme vous permettra de trouver les nombres premiers dans un intervalle donne." << endl;

    do{
        //Créer un vecteur booléen de taille choisie par l'utilisateur dans l'intervale [2,100]
        //Redemande une saisie tant que la valeur sort de l'intervalle ou casse le flux
        vector<bool> tabCriblage(saisie(), true);

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