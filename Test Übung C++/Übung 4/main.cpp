#include <cmath>
#include "funktion.h"
//Zusammenarbeit mit Jonas&Dean
using namespace std; 

#define MAXLEN 10 // kann man Makros als Kosntante nutzen?

int main()
{
	//Variablendefinitonen
	char menu = 'x';
	bool programmende = false;
	// hier alle weiteren Variablen einfuegen
	//Nachbartausch
	//const int MAXARRAYLEN = 10 ; 
	//int array[MAXARRAYLEN];
	//int tmp = 0, tmp2 = 1;
	//int wert=0;
	//int laenge=0;
	//Wurzel nach Heron
    double x = 0.0, epsilon;
    //double a1= 0.0, a2=0.0, a3 = 0.0, differenz = 0.0;
	//Zinssatz
	float kapital=0.0, p=0.0;
	//kgV & ggT
    int b=0,a=0;
	//Goldbach 
	int geradezahl, primzahl1, primzahl2;
	//Rot13
	string schnur= "\0";




	
	
	
	do
	{
		cout << "a - Zinssatz " << endl;
		cout << "b - Wurzel nach Heron " << endl;
		cout << "c - ggT " << endl;
		cout << "d - kgV " << endl;
		cout << "e - Goldbach Vermutung" << endl;
		cout << "f - Rot13" << endl;
		cout << "x - Programm beenden...." << endl << endl;
		cout << "Ihre Wahl: ";
		cin >> menu;

		switch (menu)
		{
		case 'a': // Zinssatz
			cout << " Geben Sie das Startkapital an "; 
			cin >> kapital;
			cout << " Geben Sie den Zinssatz an ";
			cin >> p;
            kapital_verdoppelt(kapital,p);
    
       
			
			break;
		case 'b': // Wurzel nach Heron
		 cout << "Gebe x ein: ";
            cin >> x;
            cout << "Gebe Epsilon ein: ";
            cin >> epsilon;

             cout << "Wert nach Heron: " << setprecision(10)<< heron_wurzel(x,epsilon) << endl;
                cout << "Sollwert" << sqrt(x) << endl;
            
			break;
		case 'c': // ggT
		cout << " Geben Sie die erste Zahl an " ;
		cin >> a;
		cout << " Geben Sie die zweite Zahl an " ;
		cin >> b; 
        cout << "Der ggT ist: " << ggT(a,b) << endl;

      		break;
		case 'd': //kgV
		cout << " Geben Sie die erste Zahl an " ;
		cin >> a;
		cout << " Geben Sie die zweite Zahl an " ;
		cin >> b; 
		cout << "Der kgV ist: " << kgV(a,b) << endl;
			break;
		case 'e': //Implementation von Goldbach vermutung
			cout << "Geben sie eine gerade Zahl groesser als 2 ein:";
			cin >> geradezahl;

			if (goldbach(geradezahl, primzahl1, primzahl2)) {
				cout << geradezahl << " = " << primzahl1 << " + " << primzahl2 << endl;
			}
			else {
				cout << "Die Goldbach-Vermutung gilt nicht f�r die eingegebene Zahl." << endl;
			}
			system("pause");
			break;

		case 'f': //Rot13
		cout << "Geben Sie eine Zeichenkette an ";
		cin >> schnur;
		cout << " Verschlüsselt: "<<rot13(schnur)<<endl;
		cout << " Entschlüsselt: "<<rot13(rot13(schnur))<<endl;
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