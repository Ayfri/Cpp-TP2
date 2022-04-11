#include "ex1.hpp"

static void affiche(const int* t) {
	std::cout << "Pointeur:" << &t <<", adresse :" << *t << " valeur :" << t << '\n';
}

static void constructeur(int* t) {
	*t = 16;
}

static void destructeur(int*& t) {
	t = nullptr;
}

void ex1() {
	int entier;
	constructeur(&entier);
	const int& reference = entier;
	auto pointeur = &entier;
	affiche(pointeur);
	affiche(&reference);
	
	destructeur(pointeur);
}
