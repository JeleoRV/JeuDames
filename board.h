#pragma once

// Classe pour le plateau de jeu

#include <vector>
#include "case.h"
using namespace std;

class board {
public:
	int taille; // largeur du plateau
	vector<Case*> cases; // création des différentes cases du plateau

};
