#include <stdio.h>
#include <string.h>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    char slovo[15];
    printf("Print slovo: ");
    scanf("%s", slovo);
    int dovzhyna = strlen(slovo);
    int count[256] = {0};
    for (int i = 0; i < dovzhyna; i++) {
        count[(int)slovo[i]]++;
    }
    unsigned long long zahal_kilkist = factorial(dovzhyna);
    for (int i = 0; i < 256; i++) {
        if (count[i] > 1) {
            zahal_kilkist /= factorial(count[i]);
        }
    }
    printf("Zahal kilkist anagram: %llu\n", zahal_kilkist);
    return 0;
}
