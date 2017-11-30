#pragma once

#include "pion.h"

class Case {
private:
	bool couleur; // BLANC ou NOIR
	pion* piece;    // peut �tre �gal � NULL si la case est vide
	int x, y;     // coordonn�es
public:
	// ACCESSEURS EN LECTURE
	bool getCouleur() const { return couleur; }
	pion* getPiece() const { return piece; }
	int getX() const { return x; }
	int getY() const { return y; }

	// ACCESSEURS EN ECRITURE
	void setPiece(pion* _piece) { piece = _piece; }

	// CONSTRUCTEURS
	Case(); // constructeur par d�faut
	Case(bool couleur, int x, int y); // constructeur classique pour le jeu de dames

	// DESTRUCTEUR
	~Case() {}

	// METHODES
	bool caseVide(); // la case est-elle vide ?
	bool piecePrise(); // sert � retirer la pi�ce de la case apr�s une prise (d�truit la pi�ce)
					   // renvoie false si probleme, true sinon.	
	bool pieceSortante(); // sert � retirer la pi�ce suite � son d�placement
						  // renvoie false si probleme, true sinon.
	bool pieceEntrante(pion piece); // sert � ajouter une pi�ce
									 // renvoie false si probleme, true sinon.
};