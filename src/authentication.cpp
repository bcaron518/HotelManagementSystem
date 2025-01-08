#include "authentication.h"
#include <cstring>

bool authenticate(const char *username, const char *password) {
    return (strcmp(username, "admin") == 0 && strcmp(password, "******") == 0);
}
