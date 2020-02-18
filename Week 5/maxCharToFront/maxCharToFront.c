//
//  main.c
//  maxCharToFront
//
//  Created by Bhargav Singapuri on 18/2/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void maxCharToFront(char *str);

int main() {
        
    char str[80], *p;
    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    
    if (p=strchr(str,'\n'))
        *p = '\0';
    
    printf("maxCharToFront(): ");
    maxCharToFront(str);
    puts(str);
          
    return 0;
}
       
void maxCharToFront(char *str) {
    
    int position = 0;
    char temp;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] > str[position]) {
            position = i;
        }
    }
    
    temp = str[position];
    
    for (int i = position; i > 0; i--) {
        str[i] = str[i-1];
    }
    
    str[0] = temp;
}
