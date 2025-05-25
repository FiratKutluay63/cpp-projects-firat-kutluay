#include "funktionen5.h"

void kunden_erfassen(sKunde list[] , int& kundenanz, int max)
{
    int kundennr = 0;
    string name = " ";
    string strasse = " ";
    int laenge = 0;
    int extrabreit = 0;
    int i = 1;
    bool dopplung = false;


    if(kundenanz < max)
    {
        do
        {
            cout << "Geben Sie die Kundennummer des Kunden an (1-99999999): ";
            cin >> kundennr;
            for(int j = 0; j < kundenanz; j++)
            {
                /*if(list[j].kdnr == kundennr)
                {
                    dopplung = true;
                    break;                    
                }
                else
                {
                    dopplung = false;
                }*/
            }
                
        }while(kundennr == 0 || kundennr > 99999999 || dopplung);
        
        list[kundenanz].kdnr = kundennr;

        
        do
        {
            cout << "Geben Sie den Kundennamen an: ";
            cin >> name;
        }while( !(name.at(0) >= 'a' && name.at(0) <= 'z') && !(name.at(0) >= 'A' && name.at(0) <= 'Z') );

        if(name.at(0) >= 'a' &&  name.at(0) <= 'z') // Automatiserter großer Erstbuchstabe
        {
            name.at(0) = name.at(0) - 32;
        }

        while(i < name.length())
        {
            if( (name.at(i) >= 'A' &&  name.at(i) <= 'Z')) // Automatiserte Kleinbuchstaben
            {
                name.at(i) = name.at(i) + 32;
            }   
            i++;
        }
        i = 1;
        list[kundenanz].name = name;
        // cout << list[kundenanz].name << endl; // zur Kontrolle ob der Name des Kunden richtig ist

        
        do
        {
            cout << "Geben Sie die Straße des Kundens an: ";
            cin >> strasse;
        }while(!(strasse.at(0) >= 'a' && strasse.at(0) <= 'z') && !(strasse.at(0) >= 'A' && strasse.at(0) <= 'Z') );

        if(strasse.at(0) >= 'a' &&  strasse.at(0) <= 'z')
        {
            strasse.at(0) = strasse.at(0) - 32;
        }

        while(i < strasse.length())
        {
            if( (strasse.at(i) >= 'A' &&  strasse.at(i) <= 'Z'))
            {
                strasse.at(i) = strasse.at(i) + 32;
            }   
            i++;
        }
        i = 1;
        list[kundenanz].strasse = strasse;
        // cout << list[kundenanz].strasse << endl; // zur Kontrolle ob die Strasse richtig ist
        do
        {
            cout << "Geben Sie die laenge des ... an: ";
            cin >> laenge;
        }while(laenge == 0);
        list[kundenanz].laenge = laenge;

        do
        {
            cout << "Ist die Arbeit aufwendig? (0 = Nein, 1 = Ja): ";
            cin >> extrabreit;
             }while(extrabreit != 1 && extrabreit != 0);
        list[kundenanz].extrabreit = extrabreit;
        kundenanz++;
    }
}   


void kunden_auflisten (sKunde list[], int kundenanz)
{
    int i = 0, laenge_str = 0, laenge_kdnr = 0, laenge_l = 0, j = 0, tmp = 0;

    cout << setfill('-') << setw(65) << "\n";  // \n= Enter
    cout << "| " << "Kundennr" << " | " << "Strasse" << setfill(' ') << setw(21) << " | " << "laenge" << "   | " << "Extrabreit" << " |" <<"\n";
    cout << setfill('-') << setw(65) << "\n";
    
    while(kundenanz > i)
    {       
        
        laenge_str = 7 - list[i].strasse.length() + 21;
        format(list[i].kdnr, j); // Funktion bei Zeile 190
        laenge_kdnr = 8 - j + 3;
        j = 0;

        format(list[i].laenge, j);
        laenge_l = 8 - j + 3;
        j = 0;
        cout << "| " << list[i].kdnr << setfill(' ') << setw(laenge_kdnr) << " | " << list[i].strasse << setfill(' ') << setw(laenge_str) << "  | " << list[i].laenge << setfill(' ') << setw(laenge_l) << "  | ";
        if(list[i].extrabreit == true)
        {
            cout << "Ja" << setw(11) << " | " << "\n";
        }
        else
            cout << "Nein" << setw(9) << " | " << "\n";
        i++;
        
    }
    cout << setfill('-') << setw(65) << "\n";
}

void sortieren(sKunde reihe[], int anz)                // Bubblesort
{
    sKunde tmp;
    for (int i = 0; i < anz - 1; i++)
    {
        for (int j = 0; j < anz - 1; j++)
        {
            if(reihe[j].strasse > reihe[j+1].strasse) //Strings werden durch Buchstaben verglichen
            {
                tmp = reihe[j];                      // Tausch der Structs
                reihe[j] = reihe[j+1];
                reihe[j+1] = tmp;
            }
        }
        
    }
    
}

void raeumliste_erstellen(sKunde liste[], int anz)
{
    int i = 0, sum = 0, nr = 0;

    while(i < anz)
    {
        if(sum < MAX_REICHWEITE)
        {
            if(liste[i].extrabreit)
            {
                sum = sum + liste[i].laenge*2;

            }
            else
                sum = sum + liste[i].laenge;
            nr++;
            cout << nr << " " << liste[i].strasse << endl;
        }
        else
        {   
            sum = 0;
            nr++;
            cout << nr << " Lager" << endl;
            nr++;
              if(liste[i].extrabreit)
            {
                sum = sum + liste[i].laenge*2;

            }
            else
                sum = sum + liste[i].laenge;
            cout << nr << " " << liste[i].strasse << endl;
            
        }
        i++;
    }
}

void format(int zahl, int& speicher) // Länge der Ziffern
{

    while(zahl != 0)
    {                      // Kundenummer und Länge
        zahl = zahl / 10; // Verschiebung des Kommas im Dezimalsystem
        speicher++;
    }
}