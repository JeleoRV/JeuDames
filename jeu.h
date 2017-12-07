#pragma once

#include "board.h"

// Cr�ation de la classe qui servira a g�rer le jeu 
class jeu {

private :
	bool Jeu; // Bool�en donnant l'indication de d�but et de fin de partie
	bool Victoire; // Bool�en donnant la victoire � un joueur (Noir ou Blanc)
	board Plateau; // plateau de jeu

public :
	// constructeurs 
	jeu(); // constructeur par d�faut
	jeu(int _taille); // constructeur de base, avec la taille du plateau comme seul param�tre

	// Destructeur 
	~jeu() {};
};