#include "board.h"

using namespace std;

// constructeur par d�faut
board::board() {
	taille = 0; // taille nulle
	cases = vector<Case*>(); // pas de case cr�e
}

// constructeur de base avec la taille du plateau en entr�e
board::board(int _taille) {
	taille = _taille; // enregistrement de la taille du plateau
	bool couleur = true; // bool�en permettant d'alterner la couleur des cases g�n�r�e
	for (int i = 0; i<taille; i+=1) { // boucle for de cr�ation du plateau
		for (int j = 0; j<taille; j+=1) { // deuxi�me boucle ( plateau 2D ...)
			cases.push_back(new Case(couleur, i, j)); // Cr�ation des pointeurs sur des cases
			couleur = !couleur; // alternance des couleurs
		}
	}





}