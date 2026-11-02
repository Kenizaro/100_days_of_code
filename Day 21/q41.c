#include <stdio.h>

int main() {
    int n, first, last, temp, divisor = 1;

    scanf("%d", &n);

    temp = n;

    last = n % 10;

    while (temp >= 10) {
        temp = temp / 10;
        divisor = divisor * 10;
    }

    first = temp;

    n = n - first * divisor - last;
    n = n + last * divisor + first;

    printf("%d", n);

    return 0;
}
