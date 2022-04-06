#pragma once

#include <iostream>

template <typename T>
/**
 * Imprime l'adresse de l'argument et la valeur de l'argument
 *
 * @param t le nom du paramètre
 */
void affiche(T t);

/**
 * Attribue la valeur à l'entier pointé.
 *
 * @param t un pointeur vers un entier
 */
void constructeur(int *t);

/**
 * Détruit l'entier pointé.
 *
 * @param t le pointeur vers un entier
 */
void destructeur(const int *t);

void ex1();

