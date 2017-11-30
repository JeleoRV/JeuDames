#include "case.h"

using namespace std;

Case::Case() {
	couleur = BLANC;
	piece = NULL;
	x = 0;
	y = 0;
}

Case::Case(bool _couleur, int _x, int _y) {
	couleur = _couleur;
	x = _x;
	y = _y;
	piece = NULL;
}

bool Case::caseVide() {
	if (piece == NULL) {
		return true;
	}
	return false;
}

bool Case::piecePrise() {
	if (caseVide()) {
		return false;
	}
	piece->~pion();
	piece = NULL;
	return true;
}

bool Case::pieceSortante() {
	if (caseVide()) {
		return false;
	}
	piece = NULL;
	return true;
}

bool Case::pieceEntrante(pion _piece) {
	if (!caseVide()) {
		return false;
	}
	piece = &_piece;
	return true;
}