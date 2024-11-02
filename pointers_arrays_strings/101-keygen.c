#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

char generate_random_char() {
    int random_type = rand() % 4;
    if (random_type == 0) {
        return 'A' + (rand() % 26);
    } else if (random_type == 1) {
        return 'a' + (rand() % 26);
    } else if (random_type == 2) {
        return '0' + (rand() % 10);
    } else {
        char special_chars[] = "!@#$%^&*()_+[]{}|;:,.<>?";
        return special_chars[rand() % (sizeof(special_chars) - 1)];
    }
}

int main(void) {
    srand(time(NULL));
    char password[PASSWORD_LENGTH + 1];
    int i;

    for (i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = generate_random_char();
    }
    password[PASSWORD_LENGTH] = '\0';
    printf("%s\n", password);
    return 0;
}

