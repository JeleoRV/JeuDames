#include "pion.h"

#include <iostream>

using namespace std;

pion::pion(bool _couleur, bool _rang, string _nom) {
	couleur = _couleur;
	rang = _rang;
	nom = _nom;
}

pion::pion() {
	rang = PION;
	couleur = BLANC;
	nom = "";
}

pion::pion(bool _couleur) {
	couleur = _couleur;
	rang = PION;
	if (couleur == BLANC) {
		nom = "b";
	}
	else {
		nom = "n";
	}
}

bool pion::promotion() {
	if (rang == DAME) {
		return false;
	}
	rang = DAME;
	return true;
}