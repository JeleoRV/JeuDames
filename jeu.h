#pragma once

#include "board.h"
#include "Vector"

// Création de la classe qui servira a gérer le jeu 
class jeu {

private :
	bool Jeu; // Booléen donnant l'indication de début et de fin de partie
	bool Victoire; // Booléen donnant la victoire à un joueur (Noir ou Blanc)
	int NbPion; // Nombre de pion par joueurs au début de la partie
	board* Plateau; // plateau de jeu
	vector<pion*> JeuBlanc; // Vecteur contenant les pions du joueur Blanc
	vector<pion*> JeuNoir;// Vectuer contenant les pions du joueur Noir


public :
	// constructeurs 
	jeu(); // constructeur par défaut
	jeu(int _taille, int _NbPion); // constructeur de base, avec la taille du plateau comme seul paramètre

	// Destructeur 
	~jeu() {};
};