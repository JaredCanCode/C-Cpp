#include <windows.h>

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Change text color to red (FOREGROUND_RED)
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);

    // Change font style to bold (FW_BOLD)
    CONSOLE_FONT_INFOEX fontInfo;
    fontInfo.cbSize = sizeof(CONSOLE_FONT_INFOEX);
    GetCurrentConsoleFontEx(hConsole, FALSE, &fontInfo);
    fontInfo.FontWeight = FW_BOLD;
    SetCurrentConsoleFontEx(hConsole, FALSE, &fontInfo);

    printf("This is red text in bold font.\n");

    // Restore the default settings
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    fontInfo.FontWeight = FW_NORMAL;
    SetCurrentConsoleFontEx(hConsole, FALSE, &fontInfo);

    return 0;
}
