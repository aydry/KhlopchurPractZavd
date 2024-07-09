#include <stdio.h>
#include <stdlib.h>

int minKrokyv(int x, int y) {
    int vidstan = y - x;
    int krok = 1;
    int kroky = 0;
    int sumKrokyv = 0;

    while (sumKrokyv < vidstan) {
        kroky++;
        sumKrokyv += krok;
        if (sumKrokyv >= vidstan) break;
        kroky++;
        sumKrokyv += krok;
        krok++;
    }
    return kroky;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("Min kilkist krokyv: %d\n", minKrokyv(x, y));
    return 0;
}
