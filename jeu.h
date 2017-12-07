#pragma once

#include "board.h"

// Création de la classe qui servira a gérer le jeu 
class jeu {

private :
	bool Jeu; // Booléen donnant l'indication de début et de fin de partie
	bool Victoire; // Booléen donnant la victoire à un joueur (Noir ou Blanc)
	board Plateau; // plateau de jeu

public :
	// constructeurs 
	jeu(); // constructeur par défaut
	jeu(int _taille); // constructeur de base, avec la taille du plateau comme seul paramètre

	// Destructeur 
	~jeu() {};
};