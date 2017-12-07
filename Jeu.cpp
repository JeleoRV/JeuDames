#include "jeu.h"

using namespace std;

jeu::jeu() { // constructeur par d�faut
	Jeu = true; // initialisation du bool�en Jeu
	Victoire = NOIR; // Valeaur par d�faut
	NbPion = 0; // pas de pion g�n�r�
	Plateau = new board(); // cr�ation avec plateau par d�faut
	JeuBlanc = vector<pion*>(); // pas de pion blanc
	JeuNoir = vector<pion*>(); // pas de pion noir

}

jeu::jeu(int _taille, int _NbPion) {
	Jeu = true; // initialisation du boll�en de jeu 
	Victoire = NOIR; // Valeaur par d�faut
	NbPion = _NbPion; // initialisation du nombre de pion par joueur
	Plateau = new board(_taille); // initialisation du plateau
}