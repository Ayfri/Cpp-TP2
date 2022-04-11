#include "menu.hpp"

void runExercice(const int &n) {
	switch (n) {
		case 1:
			ex1();
			break;
		case 2:
			TP2_2();
			break;
		case 3:
			TP2_3();
			break;
		default:
			std::cout << "Choix invalide." << std::endl;
			break;
	}
}

inline void show_exercices_list() {
	print_line("Exercices");
	for (int i = 1; i < 4; ++i) std::cout << "Exercise " << i << "\n";
}

inline void print_line(const std::string &message, const unsigned &length) {
	const auto &size = (length / 2U - message.length() / 2U) - 2U;
	std::cout << std::string(size, '=') << " " << message << " " << std::string(size, '=') << '\n';
}

void show_menu() {
	std::cout << "Bienvenue dans le TP 2 !" << '\n';
	show_exercices_list();
	
	do {
		std::cout << "Veuillez choisir un exercice à lancer ('exit' pour quitter) : ";
		
		std::string input;
		std::cin >> input;
		
		if (tolower(input) == "exit") break;
		
		if (input.length() != 1 || input[0] < '1' || input[0] > '5') {
			std::cout << "Numéro d'exercice invalide." << '\n';
			continue;
		}
		
		const auto &exercise = std::stoi(input);
		
		runExercice(exercise);
		std::cout << "Tapez ENTRÉE pour continuer." << '\n';
		getch();
		
		show_exercices_list();
	} while (true);
}
