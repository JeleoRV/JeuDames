#pragma once

#include <iostream>

#define BLANC true
#define NOIR false
#define DAME true
#define PION false

using namespace std;

class pion {
private:
	bool couleur; // noir ou blanc
	bool rang; // dame ou pion simple
	string nom;
public:
	// ACCESSEURS EN LECTURE
	bool getCouleur() const { return couleur; }
	bool getRang() const { return rang; }
	string getNom() const { return nom; }

	// ACCESSEURS EN ECRITURE
	void setRang(bool _rang) { rang = _rang; }

	// CONSTRUCTEURS
	pion(); // Constructeur par défaut
	pion(bool couleur, bool rang, string nom); // Constructeur complet (au cas-où)
	pion(bool couleur); // Constructeur classique pour initialiser le jeu de Dames

	//DESTRUCTEUR
	~pion() {}

	// METHODES
	bool promotion(); // renvoie true si tout se passe bien, false si erreur ou warning (typiquement : si le pion est en fait déjà une dame)
};