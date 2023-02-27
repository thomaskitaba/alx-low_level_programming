#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


char* generate_password();

int main() {
char* password = generate_password();
printf("Generated password: %s\n", password);
free(password);
   return 0;
}

char* generate_password() {
    srand(time(NULL));
    int i;
    char *password = malloc(10);
if (password == NULL)    
{
    exit(1);
}
    
    const char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{}\\|;:'\",./<>?";
    for (i = 0; i < 10; i++) {
        password[i] = valid_chars[rand() % strlen(valid_chars)];
    }
    password[p] = '\0';
    return password;
}
