#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    char position[50];
    float salary;
};


void addEmployee(struct Employee employees[], int *totalEmployees) {
    printf("Enter employee id: ");
    scanf("%d", &employees[*totalEmployees].id);

    printf("Enter employee name: ");
    scanf("%s", employees[*totalEmployees].name);

    printf("Enter employee position: ");
    scanf("%s", employees[*totalEmployees].position);

    printf("Enter employee salary: ");
    scanf("%f", &employees[*totalEmployees].salary);

    (*totalEmployees)++;
}

void viewEmployee(struct Employee employees[], int totalEmployees) {
    printf("\nTotal employees: %d\n", totalEmployees);
    printf("%-10s %-20s %-20s %-10s\n", "ID", "Name", "Position", "Salary");
    for (int i = 0; i < totalEmployees; i++) {
        printf("%-10d %-20s %-20s %-10.2f\n", employees[i].id, employees[i].name, employees[i].position, employees[i].salary);
    }
}

int main() {


    printf("   ___   ___  ______  _____ ______  ______  _____  _   _ \n");
    printf("  |_  | / _ \\ | ___ \\|  ___||  _  \\ |  _  \\|  ___|| | | |\n");
    printf("    | |/ /_\\ \\| |_/ /| |__  | | | | | | | || |__  | | | |\n");
    printf("    | ||  _  ||    / |  __| | | | | | | | ||  __| | | | |\n");
    printf("/\\__/ /| | | || |\\ \\ | |___ | |/ /_ | |/ / | |___ \\ \\_/ /\n");
    printf("\\____/ \\_| |_/\\_| \\_|\\____/ |___/(_)|___/  \\____/  \\___/ \n");
    printf("(___Jared_San_Fernando__>__Employee_Management_Sys_____>>\n");

    struct Employee employees[50];
    int totalEmployees = 0;
    int choice;

    while (1) {
        printf("\n1. Add employee\n");
        printf("2. View employee\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee(employees, &totalEmployees);
                break;
            case 2:
                viewEmployee(employees, totalEmployees);
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}