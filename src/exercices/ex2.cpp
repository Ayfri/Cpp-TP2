#include "ex2.hpp"

typedef double *ptrDouble;

void constructeur_tableau(ptrDouble &dd, const unsigned &taille) {
	dd = new double[taille];
}

void afficher_tableau(const ptrDouble &dd, const unsigned &taille) {
	if (dd == nullptr) {
		std::cout << "Tableau vide" << '\n';
		return;
	}
	std::cout << "[";
	for (auto i = 0U; i < taille; i++) {
		if (i > 0) std::cout << ", ";
		std::cout << dd[i];
	}
	std::cout << "]" << '\n';
}

void modifier_tableau(const ptrDouble &dd, const unsigned &taille, const unsigned &index, const double &valeur) {
	dd[index] = valeur;
}

void destructeur_tableau(ptrDouble &dd) {
	delete[] dd;
	dd = nullptr;
}

const double &get_tableau(const ptrDouble &dd, const unsigned &taille, const unsigned &index) {
	return dd[index];
}

double &get_tableau(ptrDouble &dd, const unsigned &taille, const unsigned &index) {
	return dd[index];
}

void TP2_2() {
	ptrDouble d1 = nullptr;
	unsigned t1 = 5;
	constructeur_tableau(d1, t1);
	afficher_tableau(d1, t1);
	modifier_tableau(d1, t1, 2, 3.13589985);
	afficher_tableau(d1, t1);
	std::cout << get_tableau(d1, t1, 2) << '\n';
	get_tableau(d1, t1, 2) = 62.1;
	std::cout << get_tableau(d1, t1, 2) << '\n';
	afficher_tableau(d1, t1);
	destructeur_tableau(d1);
	afficher_tableau(d1, t1);
}