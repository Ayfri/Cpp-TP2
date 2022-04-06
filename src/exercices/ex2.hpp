#pragma once

#include <iostream>

typedef double *ptrDouble;

/**
 * Construit un nouveau tableau de doubles de la taille donnée et renvoie un pointeur vers le tableau.
 *
 * @param dd le pointeur vers le tableau
 * @param taille la taille du tableau
 */
void constructeur_tableau(ptrDouble& dd, const unsigned &taille);

/**
 * Imprime le contenu d'un tableau de doubles.
 *
 * @param dd le pointeur vers le tableau
 * @param taille la taille du tableau
 */
void afficher_tableau(const ptrDouble& dd, const unsigned &taille);

/**
 * Modifier la valeur de l'élément à la position d'index du tableau
 *
 * @param dd le double pointeur vers le tableau
 * @param taille la taille du tableau
 * @param index l'index de l'élément à modifier
 * @param valeur la valeur à insérer dans le tableau
 */
void modifier_tableau(const ptrDouble& dd, const unsigned &taille, const unsigned &index, const double &valeur);

/**
 * Supprime un tableau de doubles et supprime le pointeur vers le tableau.
 *
 * @param dd le pointeur vers le tableau
 */
void destructeur_tableau(ptrDouble& dd);

/**
 * Récupère la valeur d'un tableau de doubles à un index donné.
 *
 * @param dd Tableau de doubles
 * @param taille Taille du tableau
 * @param index Index de la valeur à récupérer
 */
const double& get_tableau(const ptrDouble& dd, const unsigned &taille, const unsigned &index);

/**
 * Récupère la valeur d'un tableau de doubles à un index donné.
 *
 * @param dd Tableau de doubles
 * @param taille Taille du tableau
 * @param index Index de la valeur à récupérer
 */
double& get_tableau(ptrDouble& dd, const unsigned &taille, const unsigned &index);

void TP2_2();