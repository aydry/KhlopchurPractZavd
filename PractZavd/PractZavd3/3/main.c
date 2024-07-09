#include <stdio.h>

int main() {
    int p;
    scanf("%d", &p);
    if (p == 1) {
        printf("2\n");
        return 0;
    }
    long long a[p + 1], b[p + 1], c[p + 1], d[p + 1];
    a[1] = 1;
    b[1] = 1;
    c[1] = 0;
    d[1] = 0;

    for (int i = 2; i <= p; i++) {
        a[i] = a[i - 1] + b[i - 1] - c[i - 1];
        b[i] = a[i - 1] + b[i - 1] - d[i - 1];
        c[i] = a[i - 1];
        d[i] = b[i - 1];
    }
    long long resultat = a[p] + b[p];
    printf("%lld\n", resultat);
    return 0;
}
