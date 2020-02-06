//
//  main.c
//  locateFirstChar
//
//  Created by Bhargav Singapuri on 6/2/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int locateFirstChar(char *str, char ch); int main() {
      
    char str[40], ch, *p;
    
    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    
    if (p=strchr(str,'\n')) {
        *p = '\0';
    }
    
    printf("Enter the target character: \n");
    scanf("%c", &ch);
    printf("locateFirstChar(): %d\n", locateFirstChar(str, ch));
    
    return 0;
}
   
int locateFirstChar(char *str, char ch) {
    int location;
    
    for (location = 0; *(str + location) != '\0'; location++) {
        if (*(str + location) == ch) {
            return location;
        }
    }
    
    return -1;
}
