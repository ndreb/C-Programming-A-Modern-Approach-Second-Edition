/*
 * Chapter 5
 * Example 1
 *
 * Computes a broker's commission.
 */

#include <stdio.h>

int main(void)
{
    float commission, trade;

    printf("Enter value of trade: ");
    scanf("%f", &trade);

    if (trade < 2500.00f) {
        commission = (0.017f * trade) + 30.00f;
    } else if (trade < 6250.00f) {
        commission = (0.0066f * trade) + 56.00f;
    } else if (trade < 20000.00f) {
        commission = (0.0034f * trade) + 76.00f;
    } else if (trade < 50000.00f) {
        commission = (0.0022f * trade) + 100.00f;
    } else if (trade < 500000.00f) {
        commission = (0.0011f * trade) + 155.00f;
    } else {
        commission = (0.0009f * trade) + 255.00f;
    }

    if (commission < 39.00f) {
        commission = 39.00f;
    }

    printf("Commission: $%.2f", commission);

    return 0;
}
