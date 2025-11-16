#include <stdio.h>
#include <string.h>

int main(){
    char names[5][30] = {"Shayan", "Abdullah", "Rohail", "Sameer", "Osama"}, search[30], isFound =0;
    for(int i = 0; i < 5; i++){
        printf("%s\n", names[i]);
    }
    printf("Enter name to search: ");
    scanf("%s", search);
    for(int i = 0; i < 5; i++){
        if(strcmp(names[i], search) == 0){
            printf("%s found at index %d\n", search, i);
            isFound = 1;
            break;
        }
    }
    if(!isFound){
        printf("%s not found\n", search);
    }
    return 0;
}