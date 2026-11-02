#include <stdio.h>

int main() {
    int n, rem, binary = 0, place = 1;

    scanf("%d", &n);

    if (n == 0) {
        printf("0");
    }

    while (n > 0) {
        rem = n % 2;
        binary = binary + rem * place;
        place = place * 10;
        n = n / 2;
    }

    printf("%d", binary);

    return 0;
}
