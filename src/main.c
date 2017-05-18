#include "deposit.h"

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
