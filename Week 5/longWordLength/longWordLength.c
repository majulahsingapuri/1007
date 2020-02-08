//
//  main.c
//  longWordLength
//
//  Created by Bhargav Singapuri on 6/2/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int longWordLength(char *s);
int main() {
         
    char str[80], *p;
   
    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n'))
        *p = '\0';
    
    printf("longWordLength(): %d\n", longWordLength(str));
    
    return 0;
}
      
int longWordLength(char *s) {
    int length = 0, count = 0;
    
    for (int i = 0; *(s + i) != '\0'; i++) {
        if (*(s + i) != ' ' && *(s + i) != '.' && *(s + i) != '!'&& *(s + i) != '?') {
            count++;
        } else {
            if (count > length) {
                length = count;
            }
            count = 0;
        }
    }
    
    return length;
}
