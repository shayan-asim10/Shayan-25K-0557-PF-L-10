#include <stdio.h>

int main(){
    char names[5][30];
    printf("Enter 5 names\n");
    for(int i = 0; i < 5; i++){
        printf("Name %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
    }
    printf("\nYou entered:\n");
    for(int i = 0; i < 5; i++){
        printf("%s", names[i]);
    }
    return 0;
}