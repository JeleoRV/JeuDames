#include "board.h"

using namespace std;

// constructeur par défaut
board::board() {
	taille = 0; // taille nulle
	cases = vector<Case*>(); // pas de case crée
}

// constructeur de base avec la taille du plateau en entrée
board::board(int _taille) {
	taille = _taille; // enregistrement de la taille du plateau
	bool couleur = true; // booléen permettant d'alterner la couleur des cases générée
	for (int i = 0; i<taille; i+=1) { // boucle for de création du plateau
		for (int j = 0; j<taille; j+=1) { // deuxième boucle ( plateau 2D ...)
			cases.push_back(new Case(couleur, i, j)); // Création des pointeurs sur des cases
			couleur = !couleur; // alternance des couleurs
		}
	}





}