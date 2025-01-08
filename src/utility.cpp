#include "utility.h"
#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

void intro() {
    cout << "\n\n\tC++ Project on Hotel Management System";
    cout << "\n\n\t\tMade by: Daljeet Singh Chhabra";
}

void head() {
    clear_screen();
    cout << "********************************************\n";
    cout << "*       XYZ Group of Hotels Management     *\n";
    cout << "********************************************\n";
}

void clear_screen() {
    system("cls || clear");
}

void wait_for_key() {
    cout << "\nPress any key to continue...";
    getch();
}

void loading_animation() {
    for (int i = 0; i < 10; ++i) {
        cout << ".";
        // Simulate delay for animation
    }
}
