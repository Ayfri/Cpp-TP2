#pragma once

#include <iostream>

/**
 * Imprime l'adresse de l'argument et la valeur de l'argument
 *
 * @param t le nom du paramètre
 */
static void affiche(const int* t);

/**
 * Attribue la valeur à l'entier pointé.
 *
 * @param t un pointeur vers un entier
 */
static void constructeur(int * t);

/**
 * Détruit l'entier pointé.
 *
 * @param t le pointeur vers un entier
 */
static void destructeur(int *& t);

void ex1();

