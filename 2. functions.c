#include <stdio.h>

int sum_of_four(int a, int b, int c, int d) {
    int sum = a;

    if (b > sum)
        sum = b;

    if (c > sum)
        sum = c;

    if (d > sum)
        sum = d;

    return sum;
}

int main() {
    int a, b, c, d;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    printf("%d", sum_of_four(a, b, c, d));

    return 0;
}
