#pragma once

#include "board.h"
#include "Vector"

// Cr�ation de la classe qui servira a g�rer le jeu 
class jeu {

private :
	bool Jeu; // Bool�en donnant l'indication de d�but et de fin de partie
	bool Victoire; // Bool�en donnant la victoire � un joueur (Noir ou Blanc)
	int NbPion; // Nombre de pion par joueurs au d�but de la partie
	board* Plateau; // plateau de jeu
	vector<pion*> JeuBlanc; // Vecteur contenant les pions du joueur Blanc
	vector<pion*> JeuNoir;// Vectuer contenant les pions du joueur Noir


public :
	// constructeurs 
	jeu(); // constructeur par d�faut
	jeu(int _taille, int _NbPion); // constructeur de base, avec la taille du plateau comme seul param�tre

	// Destructeur 
	~jeu() {};
};