#pragma once

#include "pion.h"

class Case {
private:
	bool couleur; // BLANC ou NOIR
	pion* piece;    // peut être égal à NULL si la case est vide
	int x, y;     // coordonnées
public:
	// ACCESSEURS EN LECTURE
	bool getCouleur() const { return couleur; }
	pion* getPiece() const { return piece; }
	int getX() const { return x; }
	int getY() const { return y; }

	// ACCESSEURS EN ECRITURE
	void setPiece(pion* _piece) { piece = _piece; }

	// CONSTRUCTEURS
	Case(); // constructeur par défaut
	Case(bool couleur, int x, int y); // constructeur classique pour le jeu de dames

	// DESTRUCTEUR
	~Case() {}

	// METHODES
	bool caseVide(); // la case est-elle vide ?
	bool piecePrise(); // sert à retirer la pièce de la case après une prise (détruit la pièce)
					   // renvoie false si probleme, true sinon.	
	bool pieceSortante(); // sert à retirer la pièce suite à son déplacement
						  // renvoie false si probleme, true sinon.
	bool pieceEntrante(pion piece); // sert à ajouter une pièce
									 // renvoie false si probleme, true sinon.
};