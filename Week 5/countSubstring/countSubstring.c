//
//  main.c
//  countSubstring
//
//  Created by Bhargav Singapuri on 18/2/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define INIT_VALUE -1

int countSubstring(char str[], char substr[]);

int main() {

    char str[80], substr[80], *p;
    int result=INIT_VALUE;
    
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n'))
        *p = '\0';
    
    printf("Enter the substring: \n");
    fgets(substr, 80, stdin);
    if (p=strchr(substr,'\n'))
        *p = '\0';
    
    result = countSubstring(str, substr);
    printf("countSubstring(): %d\n", result);
    
    return 0;
}

int countSubstring(char str[], char substr[]) {
    int count = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == substr[0]) {
            int k = i+1;
            for (int j = 1; substr[j] != '\0'; j++) {
                if (str[k] == substr[j]) {
                    k++;
                } else {
                    goto jump;
                }
            }
            count++;
        }
    jump:;
    }
    
    return count;
}
