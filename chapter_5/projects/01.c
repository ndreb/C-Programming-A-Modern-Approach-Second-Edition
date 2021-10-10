#include <stdio.h>

int nlog(int x)
{
    int y;

    if (x < 0) {
        x *= -1;
    }

    for (y = 1; x >= 10; y++) {
        x /= 10;
    }

    return y;
}

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n == 0) {
        printf("Enter a number: ");
        scanf("%d", &n);
    }

    printf("The number %d has %d digits.\n", n, nlog(n));

    return 0;
}
