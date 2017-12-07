#include "pion.h"

#include <iostream>

using namespace std;

pion::pion(bool _couleur, bool _rang, string _nom) { // constructeur complet
	couleur = _couleur;
	rang = _rang;
	nom = _nom;
}

pion::pion() { // constructeur par défaut
	rang = PION;
	couleur = BLANC;
	nom = "";
}

pion::pion(bool _couleur) { // constructeur de bas avec seulement
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