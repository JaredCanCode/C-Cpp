#include <stdio.h>
#include <string.h>

// Customer account structure
typedef struct {
    int account_number;
    char name[100];
    float balance;
} Account;

// Function prototypes
void create_account(Account *account);
void deposit(Account *account);
void withdraw(Account *account);
void display_account(Account *account);

int main() {



    printf("   ___   ___  ______  _____ ______  ______  _____  _   _ \n");
    printf("  |_  | / _ \\ | ___ \\|  ___||  _  \\ |  _  \\|  ___|| | | |\n");
    printf("    | |/ /_\\ \\| |_/ /| |__  | | | | | | | || |__  | | | |\n");
    printf("    | ||  _  ||    / |  __| | | | | | | | ||  __| | | | |\n");
    printf("/\\__/ /| | | || |\\ \\ | |___ | |/ /_ | |/ / | |___ \\ \\_/ /\n");
    printf("\\____/ \\_| |_/\\_| \\_|\\____/ |___/(_)|___/  \\____/  \\___/ \n");
    printf("(___Jared_San_Fernando__>__Banking_Management_Sys_____>>\n");


    int choice;
    Account account;

    while (1) {
        printf("\n1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Display Account\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                create_account(&account);
                break;
            case 2:
                deposit(&account);
                break;
            case 3:
                withdraw(&account);
                break;
            case 4:
                display_account(&account);
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice. Please enter a valid choice.\n");
        }
    }

    return 0;
}

void create_account(Account *account) {
    printf("\nEnter the account number: ");
    scanf("%d", &account->account_number);

    printf("Enter the name: ");
    scanf("%s", account->name);

    printf("Enter the initial deposit amount: ");
    scanf("%f", &account->balance);
}

void deposit(Account *account) {
    float amount;

    if (account->account_number == 0) {
        printf("You need to create an account first.\n");
        return;
    }

    printf("Enter the amount to deposit: ");
    scanf("%f", &amount);

    account->balance += amount;

    printf("Deposit successful. Current balance: $%.2f\n", account->balance);
}

void withdraw(Account *account) {
    float amount;

    if (account->account_number == 0) {
        printf("You need to create an account first.\n");
        return;
    }

    printf("Enter the amount to withdraw: ");
    scanf("%f", &amount);

    if (account->balance < amount) {
        printf("Insufficient balance. Please deposit more amount.\n");
        return;
    }

    account->balance -= amount;

    printf("Withdrawal successful. Current balance: $%.2f\n", account->balance);
}

void display_account(Account *account) {
    if (account->account_number == 0) {
        printf("You need to create an account first.\n");
        return;
    }

    printf("\nAccount number: %d\n", account->account_number);
    printf("Name: %s\n", account->name);
    printf("Balance: $%.2f\n", account->balance);
}