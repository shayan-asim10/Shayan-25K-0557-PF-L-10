#include <stdio.h>
#include <string.h>

int main(){
    printf("Enter 5 names\n");
    char names[5][20];
    for(int i=0; i<5; i++){
        printf("Name %d: ", i+1);
        scanf("%s", names[i]);
    }
    char highest[20];
    strcpy(names[0], highest);
    for(int i=1; i<5; i++){
        if(strlen(names[i]) > strlen(highest)){
            strcpy(highest, names[i]);
        }
    }
    printf("\nThe longest name is: %s\n", highest);
    return 0;
}