#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


char* generate_password(int p);

int main() {
int password_length = 10;    
char* password = generate_password(password_length);
printf("Generated password: %s\n", password);
free(password);
   return 0;
}

char* generate_password(int p) {
    srand(time(NULL));
    char* password = malloc(10);
        exit(1);
    }
    const char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{}\\|;:'\",./<>?";
    for (int i = 0; i < p; i++) {
        password[i] = valid_chars[rand() % strlen(valid_chars)];
    }
    password[p] = '\0';
    return password;
}
