//Rodrigo Perez Solis
//A01411278
//With this program the user will know what type of character he is introducing

#include <stdio.h>
#include<string.h>
#include <ctype.h>

int vocal(char c) {//with this function we check if the character is a vowel
    c = (char) tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return 1;
    }
return 0;
}
int main(){
    char str[100];
    printf("Write something");
    fgets(str, sizeof(str),stdin);

    for(int i = 0 ; i < strlen(str); i++){
        printf("%c",str[i]);
        if (isalpha(str[i])) {
            if (vocal(str[i])) {
                printf("thats a vowel\n");//For the different characters there is a different text for the user
            } else {
                printf("thats a consonant.\n");
            }
        } else if (isdigit(str[i])) {
            printf("thats a digit\n");
        } else if (str[i] == ' ' || str[i] == '\t') {
            printf("there is an space\n");
        } else if (str[i] == '\n');
        else {
            printf("special character\n");
        }
    }
    return 0;
    }
