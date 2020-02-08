//
//  main.c
//  countWords
//
//  Created by Bhargav Singapuri on 8/2/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int countWords(char *s);

int main() {
         
    char str[50], *p;
    
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    
    if (p=strchr(str,'\n'))
        *p = '\0';
    
    printf("countWords(): %d \n", countWords(str));
    
    return 0;
}
      
int countWords(char *s) {
    int count = 0;
    
    for (int i = 0; *(s + i) != '\0'; i++) {
        if (*(s + i) == ' ' || *(s + i) == '.' || *(s + i) == '!' || *(s + i) == '?') {
            count++;
        }
    }
    
    return count;
}
