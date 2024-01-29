#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main() {


    printf("   ___   ___  ______  _____ ______  ______  _____  _   _ \n");
    printf("  |_  | / _ \\ | ___ \\|  ___||  _  \\ |  _  \\|  ___|| | | |\n");
    printf("    | |/ /_\\ \\| |_/ /| |__  | | | | | | | || |__  | | | |\n");
    printf("    | ||  _  ||    / |  __| | | | | | | | ||  __| | | | |\n");
    printf("/\\__/ /| | | || |\\ \\ | |___ | |/ /_ | |/ / | |___ \\ \\_/ /\n");
    printf("\\____/ \\_| |_/\\_| \\_|\\____/ |___/(_)|___/  \\____/  \\___/ \n");
    printf("(___Jared_San_Fernando__>__Library_Management_Sys______>>\n\n");


    int choice;
    float money, amount, bill;

    printf("\n\n----------------------------------------");
    printf("\n Welcome to Amaya's Library of Magic! \n");
    printf("----------------------------------------\n");

    printf("\n==========Available books:==============\n");
    
    // Define variables for book names and prices
    char bookName1[] = "Game of Thrones";
    float bookPrice1 = 10.99;

    char bookName2[] = "Bridge To Terabithia";
    float bookPrice2 = 12.00;

    // Display the list of books and their prices
    printf("\n-----------------------------------\n");
    printf("1 - %s - $%.2f\n", bookName1, bookPrice1);
        printf("1 - %s - $%.2f\n", bookName2, bookPrice2);
        
    printf("-----------------------------------\n");

    printf("\nWhat would you like to buy?: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("How many of the book would you like to get?: ");
            scanf("%f", &amount);
            bill = bookPrice1 * amount;
            printf("-----------------------------------\n");
            printf("That would be: $%.2f\n", bill);
            printf("-----------------------------------\n");
            printf("PAY NOW: $");
            scanf("%f", &money);

            if (money >= bill){
            system("cls");
            float change = money - bill;
            printf("\n_____________RECEIPT_______________\n");
            printf("\nBook: %s\n", bookName1);
            printf("Price each: $%.2f\n", bookPrice1);
            printf("bill: $%.2f\n", bill);
            printf("payment: $%.2f\n", money);
            printf("change: $%.2f\n", change);
            printf("\n-----------------------------------\n");
            }
            else{
                system("cls");
                printf("\n-----------------------------------\n");
                printf("Sorry, You don't have enough money or the amount you typed is not enough.");
                printf("\n-----------------------------------\n");
            }

            case 2:
            printf("How many of the book would you like to get?: ");
            scanf("%f", &amount);
            bill = bookPrice2 * amount;
            printf("-----------------------------------\n");
            printf("That would be: $%.2f\n", bill);
            printf("-----------------------------------\n");
            printf("PAY NOW: $");
            scanf("%f", &money);

            if (money >= bill){
            system("cls");
            float change = money - bill;
            printf("\n_____________RECEIPT_______________\n");
            printf("\nBook: %s\n", bookName2);
            printf("Price each: $%.2f\n", bookPrice2);
            printf("bill: $%.2f\n", bill);
            printf("payment: $%.2f\n", money);
            printf("change: $%.2f\n", change);
            printf("\n-----------------------------------\n");
            }
            else{
                system("cls");
                printf("\n-----------------------------------\n");
                printf("Sorry, You don't have enough money or the amount you typed is not enough.");
                printf("\n-----------------------------------\n");
            }

            break;

            
    }

    return 0;
}
