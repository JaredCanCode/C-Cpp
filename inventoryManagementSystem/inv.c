#include <stdio.h>
#include <string.h>

// Defining a struct to store details about each item
typedef struct {
    int id;
    char name[50];
    float price;
    int quantity;
} Item;

// Defining a function to display all the items in the inventory
void displayItems(Item *inventory, int totalItems) {
    printf("+-------------------+------------+-----------+----------+----------+\n");
    printf("| %-15s | %-10s | %-10s | %-10s | %-10s |\n", "ID", "Name", "Price", "Quantity", "Total");
    printf("+-------------------+------------+-----------+----------+----------+\n");
    float totalCost = 0;
    for (int i = 0; i < totalItems; i++) {
        printf("| %-15d | %-10s | %-10.2f | %-10d | %-10.2f |\n", inventory[i].id, inventory[i].name, inventory[i].price, inventory[i].quantity, inventory[i].price * inventory[i].quantity);
        totalCost += inventory[i].price * inventory[i].quantity;
    }
    printf("+-------------------+------------+-----------+----------+----------+\n");
    printf("Total Cost: %.2f\n", totalCost);
}

int main() {


    printf("   ___   ___  ______  _____ ______  ______  _____  _   _ \n");
    printf("  |_  | / _ \\ | ___ \\|  ___||  _  \\ |  _  \\|  ___|| | | |\n");
    printf("    | |/ /_\\ \\| |_/ /| |__  | | | | | | | || |__  | | | |\n");
    printf("    | ||  _  ||    / |  __| | | | | | | | ||  __| | | | |\n");
    printf("/\\__/ /| | | || |\\ \\ | |___ | |/ /_ | |/ / | |___ \\ \\_/ /\n");
    printf("\\____/ \\_| |_/\\_| \\_|\\____/ |___/(_)|___/  \\____/  \\___/ \n");
    printf("(___Jared_San_Fernando__>__Inventory_Management_Sys____>>\n\n");

    // Initializing the inventory
    Item inventory[100];
    int totalItems = 0;

    // Adding items to the inventory
    inventory[0] = (Item) {1, "Apple", 1.25, 10};
    inventory[1] = (Item) {2, "Banana", 0.75, 15};
    inventory[2] = (Item) {3, "Pear", 1.50, 20};
    totalItems = 3;

    // Displaying all the items in the inventory
    displayItems(inventory, totalItems);

    return 0;
}