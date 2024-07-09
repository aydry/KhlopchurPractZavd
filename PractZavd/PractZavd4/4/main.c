#include <stdio.h>

int main() {
    int n;
    printf("Print n:");
    scanf("%d", &n);
    int kilkist = 0;
    for (int m = 1; m < n; m++) {
        if (n % m == n / m) {
            kilkist++;
        }
    }
    printf("Kilkist dilniciv %d: %d\n", n ,kilkist);
    return 0;
}
