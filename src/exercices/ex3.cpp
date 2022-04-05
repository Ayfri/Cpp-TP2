#include "ex3.hpp"

void constructeur_tableau(ptrStdDouble &dd, const unsigned &taille) {
	dd = std::shared_ptr<double>(new double[taille], std::default_delete<double[]>());
}

void afficher_tableau(const ptrStdDouble &dd, const unsigned &taille) {
	if (dd == nullptr) {
		std::cout << "Tableau vide" << '\n';
		return;
	}
	std::cout << "[";
	for (auto i = 0U; i < taille; i++) {
		if (i > 0) std::cout << ", ";
		std::cout << (&dd)[i];
	}
	std::cout << "]" << '\n';
}

void modifier_tableau(const ptrStdDouble &dd, const unsigned &taille, const unsigned &index, const double &valeur) {
	dd.get()[index] = valeur;
}

void destructeur_tableau(ptrStdDouble &dd) {
	dd = nullptr;
}

const double &get_tableau(const ptrStdDouble &dd, const unsigned &taille, const unsigned &index) {
	return dd.get()[index];
}

double &get_tableau(ptrStdDouble &dd, const unsigned &taille, const unsigned &index) {
	return dd.get()[index];
}

void TP2_3() {
	ptrStdDouble d1 = nullptr;
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