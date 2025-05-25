// Aufgab 5
#include "funktionen5.h"

int main()
{
	//Variablendefinitonen
	char menu = 'x';
	bool programmende = false;
	int kundenanz = 0;
	// hier alle weiteren Variablen einfügen
	sKunde liste[LAENGE]; // Array für alle Kunden

	do
	{
		cout << "Schneeraemung " << endl;
		cout << "a. neuen Kunden erfassen" << endl;
		cout << "b. Alle Kunden auflisten" << endl;
		cout << "c. nach Strassen sortieren" << endl;
		cout << "d. Raeumlisten erstellen" << endl;
		cout << "x. Programmende" << endl << endl;
		cout << "Ihre Wahl: ";
		cin >> menu;

		switch (menu)
		{
		case 'a':case 'A':// Ihre Implementation von Punkt a
			kunden_erfassen(liste, kundenanz, LAENGE);
			break;
		case 'b':case 'B': // Ihre Implementation von Punkt b
			kunden_auflisten(liste, kundenanz);
			break;
		case 'c':case 'C': // Ihre Implementation von Punkt c
			sortieren(liste, kundenanz);
			kunden_auflisten(liste, kundenanz);
			break;
		case 'd':case 'D': // Ihre Implementation von Punkt d
			raeumliste_erstellen(liste, kundenanz);
			break;

		case 'x': // Programmende
			programmende = true;
			break;
		default: cout << "Der eingegebene Wert " << menu
			<< " ist nicht gueltig!" << endl;
			break;
		}// Ende switch
	} while (programmende == false);
	return 0;
}