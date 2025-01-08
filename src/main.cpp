#include "hotel.h"
#include "utility.h"
#include "authentication.h"
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char username[20], password[20];

    intro();
    loading_animation();
    wait_for_key();

    clear_screen();
    head();

    cout << "\n\n\tUsername: ";
    cin >> username;
    cout << "\n\tPassword: ";
    cin >> password;

    if (!authenticate(username, password)) {
        cout << "\n\n\tInvalid Credentials!";
        wait_for_key();
        return -1;
    }

    cout << "\n\n\tLogin Successful!";
    wait_for_key();

    Hotel hotel;
    hotel.main_menu();

    return 0;
}
