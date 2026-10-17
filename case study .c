#include <stdio.h>

int main() {
    float balance, amount;
    int choice;
    printf("Enter current account balance: Rs. ");
    scanf("%f", &balance);
    printf("\n--- ATM Menu ---\n");
    printf("1. Balance Inquiry\n");
    printf("2. Cash Withdrawal\n");
    printf("3. Cash Deposit\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Current Balance: Rs. %.2f\n", balance);
            break;
        case 2:
            printf("Enter withdrawal amount: Rs. ");
            scanf("%f", &amount);
            if (amount <= balance) {
                balance = balance - amount;
                printf("Transaction successful\n");
                printf("Remaining Balance: Rs. %.2f\n", balance);
            } else {
                printf("Insufficient balance\n");
            }
            break;
        case 3:
            printf("Enter deposit amount: Rs. ");
            scanf("%f", &amount);
            balance = balance + amount;
            printf("Deposit successful\n");
            printf("Updated Balance: Rs. %.2f\n", balance);
            break;
        default:
            printf("Invalid option\n");
            break;
    }
}