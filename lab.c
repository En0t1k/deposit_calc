#include <stdio.h>

int amount_of_income(int length, int dep_amount) {
    int cashback;

    if ((length > 0) && (length <= 30)) {
        cashback = dep_amount + (dep_amount / 100 * -10);
    }

    if ((length >= 31) && (length <= 120)) {
        if (dep_amount < 100000)
            cashback = dep_amount + (dep_amount / 100 * 2);
        else
            cashback = dep_amount + (dep_amount / 100 * 3);
    }

    if ((length >= 121) && (length <= 240)) {
        if (dep_amount < 100000)
            cashback = dep_amount + (dep_amount / 100 * 6);
        else
            cashback = dep_amount + (dep_amount / 100 * 8);
    }

    if ((length >= 241) && (length <= 365)) {
        if (dep_amount < 100000)
            cashback = dep_amount + (dep_amount / 100 * 12);
        else
            cashback = dep_amount + (dep_amount / 100 * 15);
    }

    return cashback;
}

int main() {
    int length, dep_amount;
    printf("enter lenght to deposit: \n");
    scanf("%d", &length);
    printf("enter dep_amount to deposit: \n");
    scanf("%d", &dep_amount);
    if (dep_amount >= 10000) {
        if (length >= 0) {
            if (length <= 365) {

            } else {
                printf("Error: Incorrect length.\n");
            }
        } else {
            printf("Error: Incorrect length.\n");
        }
    } else {
        printf("Error: Incorrect dep_amount");
        if (length >= 0) {
            if (length <= 365) {
                printf(".\n");
            } else {
                printf(" and length.\n");
            }
        } else {
            printf(" and length.\n");
        }
	return 1;
    }
    printf("dep_amount at the end of: ");
    printf("%d \n", amount_of_income(length, dep_amount));
    printf("net profit:  %d \n", amount_of_income(length, dep_amount)-dep_amount);
    return 0;
}
