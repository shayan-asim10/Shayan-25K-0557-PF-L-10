#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    strlwr(str1);
    strlwr(str2);

    if(strlen(str1) != strlen(str2)) {
        printf("Not an anagram!\n");
        return 0;
    }

    int used[50] = {0};
    int isAnagram = 1;

    for(int i = 0; i < strlen(str1); i++) {
        int found = 0;
        for(int j = 0; j < strlen(str2); j++) {
            if(!used[j] && str1[i] == str2[j]) {
                used[j] = 1;
                found = 1;
                break;
            }
        }
        if(!found) {
            isAnagram = 0;
            break;
        }
    }

    if(isAnagram)
        printf("An anagram!\n");
    else
        printf("Not an anagram!\n");

    return 0;
}