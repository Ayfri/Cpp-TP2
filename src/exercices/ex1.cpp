#include "ex1.hpp"

template <typename T>
void affiche(const T t) {
	std::cout << "Pointeur, adresse :" << t << " valeur :" << &t << std::endl;
}

void constructeur(int * const t) {
	*t = 16;
}

void destructeur(const int* t) {
	delete t;
	t = nullptr;
}

void ex1() {
	int entier;
	constructeur(&entier);
	const int& reference = entier;
	auto pointeur = &entier;
	affiche(pointeur);
	affiche(reference);
	affiche(entier);
	
	destructeur(&entier);
	destructeur(pointeur);
	destructeur(&reference);
}
