#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check password strength
void check_password_strength(char password[]) {
    int i, upper_case, lower_case, digits, special_characters, length;

    upper_case = lower_case = digits = special_characters = 0;
    length = strlen(password);

    for (i = 0; i < length; i++) {
        if (isupper(password[i])) {
            upper_case = 1;
        } else if (islower(password[i])) {
            lower_case = 1;
        } else if (isdigit(password[i])) {
            digits = 1;
        } else if (ispunct(password[i]) || isspace(password[i])) {
            special_characters = 1;
        }
    }

    if (length < 8) {
        printf("Password is too short.\n");
    } else if (!upper_case) {
        printf("Password should have at least one uppercase letter.\n");
    } else if (!lower_case) {
        printf("Password should have at least one lowercase letter.\n");
    } else if (!digits) {
        printf("Password should have at least one digit.\n");
    } else if (!special_characters) {
        printf("Password should have at least one special character.\n");
    } else {
        printf("Password is strong.\n");
    }
}

int main() {


    printf("   ___   ___  ______  _____ ______  ______  _____  _   _ \n");
    printf("  |_  | / _ \\ | ___ \\|  ___||  _  \\ |  _  \\|  ___|| | | |\n");
    printf("    | |/ /_\\ \\| |_/ /| |__  | | | | | | | || |__  | | | |\n");
    printf("    | ||  _  ||    / |  __| | | | | | | | ||  __| | | | |\n");
    printf("/\\__/ /| | | || |\\ \\ | |___ | |/ /_ | |/ / | |___ \\ \\_/ /\n");
    printf("\\____/ \\_| |_/\\_| \\_|\\____/ |___/(_)|___/  \\____/  \\___/ \n");
    printf("(___Jared_San_Fernando__>__Password_Checker_Sys________>>\n\n");


    char password[50];

    printf("Enter your password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = 0; // remove newline character

    check_password_strength(password);

    return 0;
}