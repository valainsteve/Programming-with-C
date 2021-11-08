#include <stdio.h>

int main()
{
    int kleineZahl, grosseZahl, wahroderfalsch;
    kleineZahl = 5;
    grosseZahl = 15;

    wahroderfalsch = (kleineZahl<grosseZahl);
    printf("Der Wert fuer \"wahr\" ist in C %d.\n",wahroderfalsch);

    wahroderfalsch = (kleineZahl>grosseZahl);
    printf("Der Wert fuer \"falsch\" ist in C %d.\n",wahroderfalsch);

    getchar();
    return 0;
}
