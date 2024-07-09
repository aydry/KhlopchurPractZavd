#include <stdio.h>

#define MOD 12345

int main() {
    int n;
    printf("Print dovziny n:");
    scanf("%d", &n);
    long long a[n + 1], b[n + 1], c[n + 1];
    a[0] = 1;
    b[0] = 0;
    c[0] = 0;

    if (n >= 1) {
        a[1] = 1;
        b[1] = 1;
        c[1] = 0;
    }

    if (n >= 2) {
        a[2] = 2;
        b[2] = 1;
        c[2] = 1;
    }

    for (int i = 3; i <= n; i++) {
        a[i] = (a[i - 1] + b[i - 1] + c[i - 1]) % MOD;
        b[i] = a[i - 1] % MOD;
        c[i] = b[i - 1] % MOD;
    }
    long long resultat = (a[n] + b[n] + c[n]) % MOD;
    printf("Kilkist poslidovnistei: %lld\n", resultat);
    return 0;
}
