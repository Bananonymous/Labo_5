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
    bool                erreurFlux;
    bool                recommencer = true;
    char                saisieUtilisateurRecommencer;

    const int           COLONNES = 10;
    const int           W = 2;

    unsigned long long  saisieUtilisateur = 100;

    cout << "Bienvenue, ce programme vous permettra de trouver les nombres premiers dans un intervalle donne." << endl;

    while (recommencer) {
    //    //Saise utilisateur
    //    erreurFlux = false;
    //    do {
    //        cout << "Veuillez entrer un nombre [2-100]." << endl;
    //        cin >> saisieUtilisateur;
    //        if (cin.fail()) {
    //            cin.clear();
    //            cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //            cout << "Erreur! Veuillez saisir une valeur valide [2 <= n <= 100]." << endl;
    //            erreurFlux = true;
    //        }
    //    } while (erreurFlux);

        //Initialisation d'un vecteur [2 à n]
        vector<int> tabCriblage(saisieUtilisateur, 0);

        //Affichage du tableau
        cout << endl << "Initialisation du tableau: " << endl;
        for (size_t i = 0; i < tabCriblage.size(); ++i){
            cout << setw(W) << tabCriblage[i];
            if ((i+1) % COLONNES == 0){
                cout << endl;
            }
        }

        //Appel de la fonction de cribage du tableau en fonction des nb premiers
        criblageTableau(tabCriblage);



        do {
            cout << endl;
            cout << "Voulez-vous recommencer ? [O/N]" << endl;
            cin  >> saisieUtilisateurRecommencer;

            if (toupper(saisieUtilisateurRecommencer) == 'O') {
                recommencer = true;

            } else if (toupper(saisieUtilisateurRecommencer) == 'N') {
                recommencer = false;

            } else {
                cout << "Erreur! Veuillez saisir une valeur valide [O/N]." << endl;
                cin  >> saisieUtilisateurRecommencer;
            }
        } while (toupper(saisieUtilisateurRecommencer)!= 'O' && toupper(saisieUtilisateurRecommencer) != 'N');

    }
    //Fin du programme
    cout << "Merci d'avoir utilise le programme" << endl;
    return EXIT_SUCCESS;
}