#include "jeu.h"

using namespace std;

jeu::jeu() { // constructeur par d�faut
	Jeu = true;
	Victoire = NOIR;
	Plateau = new board();
}

jeu::jeu(int _taille) {
	Jeu = true;
	Victoire = NOIR;
	Plateau = new board(_taille);
}