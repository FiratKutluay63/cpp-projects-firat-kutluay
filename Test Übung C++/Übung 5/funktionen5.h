#pragma once
// Header-Datei zu Aufgabe 5 "Schneer�umung"
// WiSe 2023/2024
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

/* Die Funktionen in dieser Datei dürfen beliebig geändert werden, dabei ist aber darauf zu achten,
* dass die Kommunikation aller Funktionen untereinander ausschließlich über die Parameter und Rück-
* gabewerte stattfindet.
*/

// Deklaration der Konstanten
const int LAENGE = 15;		// Max. Größe des Arrays für die Kunden
const int MAX_REICHWEITE = 200; // maximale Reichweite eines Räumfahrzeuges in [Meter]

// Deklaration der zentralen Daten-Struktur

struct sKunde {  
	//Eingaben von Text immer ohne Leerzeichen
	int kdnr; // Kundennummer
	string name;  //Name des Kunden
	string strasse; // Straße des Kunden (auf einheitliche Schreibweise achten)!
	int laenge;   // zu räumende Länge des Grundstücks (in Metern)
	bool extrabreit; // true=doppelte Länge berechnen!
	// weitere Felder dürfen Sie hier anfügen, aber keine entfernen
};

void kunden_erfassen(sKunde[], int&, int);

void kunden_auflisten (sKunde [], int);

void sortieren(sKunde reihe[], int anz);

void raeumliste_erstellen(sKunde liste[], int anz);

void format(int, int&);