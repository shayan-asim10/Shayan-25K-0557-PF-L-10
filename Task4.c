#include <stdio.h>
#include <string.h>

int main(){
    char names[5][30] = {"Shayan", "Rohail", "Ayaan", "Shaheer", "Mohid"};
    for(int i=0; i<5; i++){
        for(int j=0; j<4-i; j++){
            if(strcmp(names[j], names[j+1]) > 0){
                char temp[30];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
            }
        }
    }
    for(int i=0; i<5; i++){
        printf("%s\n", names[i]);
    }
}