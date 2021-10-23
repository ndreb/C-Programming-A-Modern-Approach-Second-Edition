/*
 * Program to balance checkbook.
 */

#include <stdio.h>

int main(void)
{
    int option;
    double balance = 0;
    double credit, debit;

    while (1) {
        printf("\n*** ACME checkbook balancing program ***\n\n"
               "OPTIONS:\n\n"
               "    0: clear, 1: credit, 2: debit, 3: balance, 4: exit\n\n"
               "Enter option: ");
        scanf("%d", &option);

        switch (option) {
            case 0:
                printf("\nBalance: $%.2f\n", balance = 0);
                break;
            case 1:
                printf("\nEnter credit amount: ");
                scanf("%lf", &credit);
                printf("\nBalance: $%.2f\n", balance -= credit);
                break;
            case 2:
                printf("\nEnter debit amount: ");
                scanf("%lf", &debit);
                printf("\nBalance: $%.2f\n", balance += debit);
                break;
            case 3:
                printf("\nBalance: $%.2f\n", balance);
                break;
            case 4:
                goto exit;
            default:
                continue;
        }
    }
exit:
    return 0;
}
