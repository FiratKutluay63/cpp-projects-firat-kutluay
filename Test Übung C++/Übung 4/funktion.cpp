#include "funktion.h"

using namespace std;


int kapital_verdoppelt(double kapital, double zinssatz)
{
    int jahr=0;
    double zins=0.0, sk=0.0;



			sk=kapital;
			do
			{
				zins=kapital*(1.0+zinssatz/100.0);
				cout << jahr << " Jahr " << kapital << endl;
				jahr++;
				kapital=zins;
			} while (kapital <= 2*sk);
			cout << jahr << " Jahr " << kapital << endl;
			return jahr;

} 

double heron_wurzel(double x, double epsilon) 
{
    double a1=0.0,a2=0.0,a3=0.0;
    double differenz=0.0;
    if (x < 0)
            {
                cout << "Fehler die gegebene Zahl " << x << " ist nicht positive" << endl;
            }
            else
            {
                
                   
                
				a1=x/2;
				do
				{
					a2=x/a1; 
					a3= (a1+a2)/2;
					differenz=a1-a2;
					a1=a3;
				} while (differenz >= epsilon);
				
               
					//setprecision übernimmt alle Nachkommastellen in der int main
            } 
            return a1;
}

int ggT(int a, int b)
{

while (b !=0) 
{

			if (a > b) 
        
            {
				a = a - b;
			}
			else {
				b = b - a;
			}

}
return a;
}

int kgV(int a, int b) 
{
  int erg=0;
  
 erg=a*b/ggT(a,b);

return erg;
}

bool istPrim(int zahl) 
{
	bool wahrheitswert=true;
	//double epsilon=0.0000001;
	if (zahl<=1)
	{
		wahrheitswert=false;
	}
	else
	{
		for (int i = 2; i < zahl; i++)
		{ 
			if (zahl%i==0)
			{
				wahrheitswert=false;
			}
		
		}

	}
	
	return wahrheitswert;
} //heron_wurzel((double)zahl,epsilon)+1

bool goldbach(int geradezahl, int& primzahl1, int& primzahl2)
{
	bool wahrheitswert=false;
	if (geradezahl <= 2 || geradezahl % 2 != 0) {
		cout << "Ungültige Eingabe. Bitte geben Sie eine gerade Zahl größer als 2 ein." << endl;
		
	}
	else
	{
		for (int i = 2; i <= geradezahl/2 ; ++i) 
		{
			if (istPrim(i) && istPrim(geradezahl - i)) 
			{
				primzahl1 = i;
				primzahl2 = geradezahl - i;
				
				wahrheitswert=true;
			}
		}
		
	}
	
	return wahrheitswert;
}

string rot13(string s)
{
    char zeichen = '\0';
    int laenge = s.size();
    for(int i = 0; i < laenge; i++)
    {
        zeichen = s[i];
        if( (zeichen >= 'a' && zeichen <= 'z') || (zeichen >= 'A' && zeichen <= 'Z') )
        {
            if( (zeichen > 'm') || (zeichen > 'M' && zeichen <= 'Z'))
            {
                zeichen -= 13;
            }
            else
                zeichen += 13;
        }
        s[i] = zeichen;
    }

    return s;
}
