#include <iostream>

#pragma once

typedef double *ptrDouble;

void constructeur_tableau(ptrDouble& dd, const unsigned &taille);

void afficher_tableau(const ptrDouble& dd, const unsigned &taille);

void modifier_tableau(const ptrDouble& dd, const unsigned &taille, const unsigned &index, const double &valeur);

void destructeur_tableau(ptrDouble& dd);

const double& get_tableau(const ptrDouble& dd, const unsigned &taille, const unsigned &index);

double& get_tableau(ptrDouble& dd, const unsigned &taille, const unsigned &index);

void TP2_2();