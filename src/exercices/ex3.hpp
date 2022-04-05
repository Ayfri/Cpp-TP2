#include <iostream>
#include <memory>

#pragma once

typedef std::shared_ptr<double> ptrStdDouble;
void constructeur_tableau(ptrStdDouble& dd,const unsigned & taille);
void afficher_tableau(const ptrStdDouble& dd, const unsigned& taille);
void modifier_tableau(const ptrStdDouble& dd, const unsigned& taille, const unsigned& index, const double& valeur);
void destructeur_tableau(ptrStdDouble& dd);
const double& get_tableau(const ptrStdDouble& dd, const unsigned& taille, const unsigned& index);
double& get_tableau(ptrStdDouble& dd, const unsigned& taille, const unsigned& index);
void TP2_3();