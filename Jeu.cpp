#include "jeu.h"

using namespace std;

jeu::jeu() { // constructeur par d�faut
	Jeu = true;
	Victoire = NOIR;
	Plateau = board();
}

jeu::jeu(int _taille) {
	Jeu = true;
	Victoire = NOIR;
	Plateau = board(_taille);
}