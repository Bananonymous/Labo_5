/*
-----------------------------------------------------------------------------------
Nom du fichier  : fonctions.h
Auteur(s)       : Jonathan Thiébaud, Léon Surbeck
Classe          : PRG1B
Date creation   : 15.11.2022
Description     : Fonctions de saisie utilisateur et de criblage de tableaux
Remarque(s)     : -
Compilateur     : Mingw-w64 g++ 12.2.0
-----------------------------------------------------------------------------------
*/

#include "fonctions.h"   //fichier header des fonctions


using namespace std;

void criblageTableau(vector<int> tabCriblage){


    for (size_t i = 0; i < tabCriblage.size(); ++i){
        if ((i+1) == 0){
            for (unsigned long long x = i * i; x < tabCriblage.size(); x += i)
                tabCriblage[i] = false;
        }
    }



}

void remplirTableau(vector<int> tabCriblage, vector<int> tabValeures){

}