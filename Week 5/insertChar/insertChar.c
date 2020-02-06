//
//  main.c
//  Week 5
//
//  Created by Bhargav Singapuri on 5/2/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void insertChar(char *str1, char *str2, char ch);

int main() {
         
    char a[80],b[80];
    char ch, *p;
    
    printf("Enter a string: \n");
    fgets(a, 80, stdin);
    
    if ((p = strchr(a,'\n'))) {
        *p = '\0';
    }
    
    printf("Enter a character to be inserted: \n");
    ch = getchar();
    insertChar(a,b,ch);
    printf("insertChar(): ");
    puts(b);
    
    return 0;
}
      
void insertChar(char *str1, char *str2, char ch) {
    
    for (int i = 0; *(str1 + i) != '\0'; i++) {
        *str2 = *(str1 + i);
        str2 += 1;
        if (i % 3 == 2) {
            *str2 = ch;
            str2 += 1;
        }
    }
}
