#include <stdio.h>

int main() {
    int n, original, temp, rem, digits = 0;
    int sum = 0, power, i;

    scanf("%d", &n);

    original = n;
    temp = n;

    while (temp > 0) {
        digits++;
        temp = temp / 10;
    }

    temp = n;

    while (temp > 0) {
        rem = temp % 10;
        power = 1;

        for (i = 1; i <= digits; i++) {
            power = power * rem;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == original)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
