/*
* berechnung des sinus zu einem Winkel für den Bereich
von 0 bis 2 Pi un 30 Schritten
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double pi = 3.14159;
    double winkel =0.;
    double sinus =0.;

    double untereGrenze = 0.;
    double obereGrenze = 2.0 * pi;
    int anzahlSchritte = 30;
    double schrittweite = (obereGrenze - untereGrenze)/(double) anzahlSchritte;

    for(winkel= 0.; winkel <= obereGrenze; winkel = winkel + schrittweite){

        sinus = sin(winkel);
        printf("winkel und Sinus sind %f und %.2f \n", winkel, sinus);

    }

    getchar();
    return 0;
}
