#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 10

char* generate_password();

int main() {
    char* password = generate_password();
    printf("Generated password: %s\n", password);
    free(password);
    return 0;
}

char* generate_password() {
    srand(time(NULL));
    char* password = malloc((PASSWORD_LENGTH + 1) * sizeof(char));
    if (password == NULL) {
        fprintf(stderr, "Error: memory allocation failed\n");
        exit(1);
    }
    const char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{}\\|;:'\",./<>?";
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = valid_chars[rand() % strlen(valid_chars)];
    }
    password[PASSWORD_LENGTH] = '\0';
    return password;
}
