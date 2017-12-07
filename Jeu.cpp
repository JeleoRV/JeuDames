#include "jeu.h"

using namespace std;

jeu::jeu() { // constructeur par défaut
	Jeu = true; // initialisation du booléen Jeu
	Victoire = NOIR; // Valeaur par défaut
	NbPion = 0; // pas de pion généré
	Plateau = new board(); // création avec plateau par défaut
	JeuBlanc = vector<pion*>(); // pas de pion blanc
	JeuNoir = vector<pion*>(); // pas de pion noir

}

jeu::jeu(int _taille, int _NbPion) {
	Jeu = true; // initialisation du bolléen de jeu 
	Victoire = NOIR; // Valeaur par défaut
	NbPion = _NbPion; // initialisation du nombre de pion par joueur
	Plateau = new board(_taille); // initialisation du plateau
}