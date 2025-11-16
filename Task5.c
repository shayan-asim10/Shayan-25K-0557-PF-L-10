#include <stdio.h>

int main(){
    char names[5][20] = {"Shayan", "Ali", "Abdullah", "Faisal", "Ammar"};
    int vowel[5] = {0};
    for(int i = 0; i < 5; i++){
        for(int j = 0; names[i][j] != '\0'; j++){
            if(names[i][j] == 'a' || names[i][j] == 'e' || names[i][j] == 'i' || names[i][j] == 'o' || names[i][j] == 'u' ||
               names[i][j] == 'A' || names[i][j] == 'E' || names[i][j] == 'I' || names[i][j] == 'O' || names[i][j] == 'U'){
                vowel[i]++;
            }
        }
    }
    for(int i=0; i<5; i++){
        printf("%s has %d vowels\n", names[i], vowel[i]);
    }
    return 0;
}