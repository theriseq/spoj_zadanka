#include <stdio.h>

int isPrimeNumber(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    int num = 0, tests = 0;
    scanf("%i", &tests);
    while (tests > 0) {
        scanf("%i", &num);
        if (isPrimeNumber(num) == 1) {
            printf("TAK\n");
        } else {
            printf("NIE\n");
        }
        tests--;
    }

    return 0;
}
