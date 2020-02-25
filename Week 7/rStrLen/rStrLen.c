//
//  main.c
//  rStrLen
//
//  Created by Bhargav Singapuri on 25/2/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
     
int rStrLen(char *s);
      
int main() {
         
    char str[80];
    printf("Enter the string: \n");
    gets(str);
    printf("rStrLen(): %d\n", rStrLen(str));
    
    return 0;
}
      
int rStrLen(char *s) {
    
    if (*s == '\0') {
        return 0;
    }
    
    return 1 + rStrLen(s + 1);
}
