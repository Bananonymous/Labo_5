/*
-----------------------------------------------------------------------------------
Nom du fichier  : fonctions.h
Auteur(s)       : Jonathan Thiébaud, Léon Surbeck
Classe          : PRG1B
Date creation   : 15.11.2022
Description     : Fonctions de saisie, de criblage et d'affichage
Remarque(s)     : -
Compilateur     : Mingw-w64 g++ 12.2.0
-----------------------------------------------------------------------------------
*/

#include "fonctions.h"   //fichier header des fonctions


using namespace std;

void criblageTableau(vector<bool>& tab){

    size_t taille = tab.size();

    for (size_t i = 2; i < taille; ++i) {

        for (size_t j = i+1; j < taille; ++j) {

            if (j % i == 0) {

                 tab.at(j) = false;
            }
        }
    }
}

void afficherTableau(const vector<bool> tabCriblage, const int w, const int colonnes){

    string str;

    for (size_t i = 0; i < tabCriblage.size(); ++i){

        cout << setw(w) << (tabCriblage[i]? "0" : "X");

        if ((i+1) % colonnes == 0){

            cout << endl;
        }
    }
}

//Lors de l'utilisation de cette surcharge tabCriblage contient uniquement les nombres premiers
void afficherTableau(const vector<int> tabCriblage, const int w, const int colonnes){

    string str;

    for (size_t i = 0; i < tabCriblage.size(); ++i){

        cout << setw(w) << tabCriblage[i];

        if ((i+1) % colonnes == 0){

            cout << endl;
        }
    }
}

void viderBuffer(){

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}


bool recommencer() {

    char saisieUtilisateurRecommencer;

    do {
        cout << endl;
        cout << "Voulez-vous recommencer ? [O/N]" << endl;
        cin >> saisieUtilisateurRecommencer;
        viderBuffer();

        if (toupper(saisieUtilisateurRecommencer) == 'O') {
            return true;

        } else if (toupper(saisieUtilisateurRecommencer) == 'N') {
            return false;

        } else {
            cout << "Erreur! Veuillez saisir une valeur valide [O/N]." << endl;
            cin >> saisieUtilisateurRecommencer;
        }
    } while (toupper(saisieUtilisateurRecommencer) != 'O' && toupper(saisieUtilisateurRecommencer) != 'N');
}

size_t saisie(){

    bool   erreurFlux        = false;
    size_t saisieUtilisateur = 0;

    cout << "Veuillez entrer un nombre [2-100] :";
    cin  >> saisieUtilisateur;


    while(erreurFlux or saisieUtilisateur < 2 or saisieUtilisateur > 100){

        erreurFlux = false;

        if (cin.fail()) {
            viderBuffer();
            erreurFlux = true;
        }

        cout << "Erreur! Veuillez saisir une valeur valide." << endl;
        cin >> saisieUtilisateur;

        viderBuffer();
    }
    return  saisieUtilisateur;
}


vector<int> vecteurPremiers(const vector<bool>& tabCriblage){

    vector<int> tabPremiers;

    for (size_t i = 0; i < tabCriblage.size(); ++i) {

        if (tabCriblage[i] == true && i >= 2){

            tabPremiers.push_back(i);
        }
    }
    return tabPremiers;
}
