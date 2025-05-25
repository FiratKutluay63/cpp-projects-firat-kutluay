// Header-Datei Aufgabe 4
// Diese Datei darf nicht geändert werden
// ZUSÄTZLICHE Funktionen müssen zuerst mit dem Betreuer im
// Labor diskutiert werden. 
#include <iostream>
#include <iomanip>
using namespace std;

int kapital_verdoppelt(double, double);
/*
* Eingabeparameter: Kapital und Zinssatz
* Rückgabewert: Anzahl Jahre bis zur Verdopplung
*/

double heron_wurzel(double, double);
/*
* Eingabewert: Radikand und Genauigkeit (=Differenz zwischen
* zwei aufeinanderfolgenden Näherungen
* Rückgabewert: Wurzelwert
*/

int ggT(int, int);
/*
* Eingabewert: die beiden Zahlen, deren ggT bestimmt werden soll
* Rückgabewert: ggT
*/
int kgV(int, int);
/*
* Eingabewert: die beiden Zahlen, deren kgV bestimmt werden soll
* Rückgabewert: kgV
*/

bool istPrim(int);
/*
* Eingabewert: die zu prüfende Zahl
* Rückgabewert: true, falls Primzahl, sonst false
*/

bool goldbach(int, int&, int&);
/*
* Eingabeparameter: zu zerlegende Zahl
* Referenzparameter: die gefundenen Primzahlen
* Rückgabewert: true bei erfolgreicher Zerlegung, sonst false
*/

string rot13(string s);
/*
* Eingabeparameter: der zu verschlüsselnde String
* Rückgabewert: der verschlüsselte String
*/