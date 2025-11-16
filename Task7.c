#include <stdio.h>
#include <string.h>

int main() {
    char full[100], username[100] = "";
    char lastName[50];
    int len = 0;
    printf("Enter full name: ");
    fgets(full, sizeof(full), stdin);
    full[strcspn(full, "\n")] = 0;
    for (int i = 0; full[i] != '\0'; i++) {
        if (full[i] != ' ')
            len++;
    }
    username[0] = full[0];
    username[1] = '\0';
    int lastSpace = -1;
    for (int i = 0; full[i] != '\0'; i++) {
        if (full[i] == ' ')
            lastSpace = i;
    }
    int j = 0;
    for (int i = lastSpace + 1; full[i] != '\0'; i++) {
        lastName[j++] = full[i];
    }
    lastName[j] = '\0';
    strcat(username, lastName);
    strlwr(username);
    char number[10];
    sprintf(number, "%d", len);
    strcat(username, number);
    printf("Username: %s\n", username);

    return 0;
}
