//
//  main.c
//  cipherText
//
//  Created by Bhargav Singapuri on 10/2/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void cipher(char *s);
void decipher(char *s);

int main() {
         
    char str[80], dummychar, *p;
    int choice;
    printf("Select one of the following options: \n"); printf("1: cipher() \n");
    printf("2: decipher() \n");
    printf("3: exit() \n");
          
    do {
        printf("Enter your choice: \n"); scanf("%d", &choice);
        switch (choice) {
            case 1:
                scanf("%c",&dummychar);
                printf("Enter the string: \n");
                fgets(str, 80, stdin);
                if (p=strchr(str,'\n'))
                    *p = '\0';
                printf("To cipher: %s -> ", str);
                cipher(str);
                printf("%s\n", str);
                break;
            case 2:
                scanf("%c",&dummychar);
                printf("Enter the string: \n");
                fgets(str, 80, stdin);
                if (p=strchr(str,'\n'))
                    *p = '\0';
                printf("To decipher: %s -> ", str);
                decipher(str);
                printf("%s\n", str);
                break;
            default:
               break;
         }
      } while (choice < 3);
      return 0;
}

void cipher(char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 65 && s[i] <= 89) {
            s[i] += 1;
        } else if (s[i] >= 97 && s[i] <= 121) {
            s[i] += 1;
        } else if (s[i] == 90){
            s[i] = 65;
        } else if (s[i] == 122) {
            s[i] = 97;
        }
    }
}
   
void decipher(char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 66 && s[i] <= 90) {
            s[i] -= 1;
        } else if (s[i] >= 98 && s[i] <= 122) {
            s[i] -= 1;
        } else if (s[i] == 65){
            s[i] = 90;
        } else if (s[i] == 97) {
            s[i] = 122;
        }
    }
}
/*
void cipher(char *s)
{
    int index = 0;

    while (s[index] != '\0'){
        if (isalpha(s[index])){
            switch (s[index]){
            case 'z':
                s[index] = 'a';
                break;
            case 'Z':
                s[index] = 'A';
                break;
            default:
                s[index]++;
                break;
            }
        }
        index++;
    }
}
void decipher(char *s)
{
    int index = 0;

    while (s[index] != '\0'){
        if (isalpha(s[index])){
            switch (s[index]){
            case 'a':
                s[index] = 'z';
                break;
            case 'A':
                s[index] = 'Z';
                break;
            default:
                s[index]--;
                break;
            }
        }
        index++;
    }
}
*/