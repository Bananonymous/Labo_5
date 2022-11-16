/*
-----------------------------------------------------------------------------------
Nom du fichier  : fonctions.h
Auteur(s)       : Jonathan Thiébaud, Léon Surbeck
Classe          : PRG1B
Date creation   : 15.11.2022
Description     : Initialisation des prototypes.
Remarque(s)     : -
Compilateur     : Mingw-w64 g++ 12.2.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO_05_CRIBLE_ERATOSTHENE_GROUPE_F_FONCTIONS_H
#define LABO_05_CRIBLE_ERATOSTHENE_GROUPE_F_FONCTIONS_H
#include <string>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <limits>
#include <cctype>
#include <iomanip>
#endif //LABO_05_CRIBLE_ERATOSTHENE_GROUPE_F_FONCTIONS_H

using namespace std;

//////////////////////Sous-programmes//////////////////////////

void        criblageTableau (vector<bool>& tabCriblage);

void        afficherTableau (vector<bool> tabCriblage, int w, int colonnes);

void        afficherTableau (vector<int> tabCriblage,  int w, int colonnes);

vector<int> vecteurPremiers (const vector<bool>& tabCriblage);

size_t      saisie();

void        viderBuffer();

bool        recommencer();

