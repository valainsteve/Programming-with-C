#include <stdio.h>

int main(){
    int zahl1, zahl2, zahl3;
    zahl1 = 2;
    zahl2 = 3;
    zahl3 = 4;

    zahl1 = zahl1 * zahl2 + zahl3;
    printf("zahl1 ist jetzt %d\n", zahl1);

    zahl1 = 2;
    zahl2 = 3;
    zahl3 = 4;

    zahl1 *= zahl2 + zahl3;
    printf("zahl1 ist jetzt %d\n", zahl1);

    getchar();
    getchar();
    return 0;
}
