/*
 * Chapter 3
 * Programming Project 2
 *
 * Formats product information entered by the user.
 */

#include <stdio.h>

int main(void)
{
    int item_number, month, day, year;
    float unit_price;
    char header[35] = "Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate";

    printf("Enter item number: ");
    scanf("%d", &item_number);
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    printf("Enter purchase date: ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("\n%s\n", header);
    printf("%-16.d$%-15.2f%.2d/%.2d/%d\n", item_number, unit_price, month, day,
           year);

    return 0;
}
