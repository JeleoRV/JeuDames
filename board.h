#pragma once

// Classe pour le plateau de jeu

#include <vector>
#include "case.h"
using namespace std;

class board {
private:
	int taille; // largeur du plateau
	vector<Case*> cases; // création des différentes cases du plateau


public:
	// Construteurs
	board(); // constructeur par defaut
	board(int _taille); // construteur classique

	// Destructeur
	~board() {}
};
