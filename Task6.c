#include <stdio.h>
#include <string.h>

int main(){
    char first[3][20], last[3][20], combined[3][40];
    for(int i=0; i<3; i++){
        printf("Enter first name %d: ", i+1);
        scanf("%s", first[i]);
        printf("Enter last name %d: ", i+1);
        scanf("%s", last[i]);
    }
    for(int i=0; i<3; i++){
        strcpy(combined[i], first[i]);
        strcat(combined[i], " ");
        strcat(combined[i], last[i]);
    }
    printf("\nCombined Names:\n");
    for(int i=0; i<3; i++){
        printf("%s\n", combined[i]);
    }
    return 0;
}