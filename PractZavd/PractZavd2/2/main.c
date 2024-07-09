#include <stdio.h>

int nsd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int nsk(int a, int b) {
    return (a / nsd(a, b)) * b;
}

int main() {
    int n;
    scanf("%d", &n);
    int chysla[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &chysla[i]);
    }
    int resultat = chysla[0];
    for (int i = 1; i < n; i++) {
        resultat = nsk(resultat, chysla[i]);
    }
    printf("%d\n", resultat);
    return 0;
}
