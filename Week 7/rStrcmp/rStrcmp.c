//
//  main.c
//  rStrcmp
//
//  Created by Bhargav Singapuri on 25/2/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
#define INIT_VALUE 100

int rStrcmp(char *s1, char *s2);

int main() {

    char source[40], target[40];
    int result = INIT_VALUE;

    printf("Enter a source string: \n");
    gets(source);
    printf("Enter a target string: \n");
    gets(target);
    result = rStrcmp(source, target);
    printf("rStrcmp(): %d", result);
    
    return 0;
}
      
int rStrcmp(char *s1, char *s2) {
    
    if (*s1 == '\0' && *s2 == '\0') {
        return 0;
    } else if (*s1 == '\0') {
        return -1;
    } else if (*s2 == '\0') {
        return 1;
    } else {
        int result = rStrcmp(s1 + 1, s2 + 1);
        if (result != 0) {
            return result;
        } else {
            if (*s1 == *s2) {
                return 0;
            } else if (*s1 > *s2) {
                return 1;
            } else {
                return -1;
            }
        }
    }
/* Suggested cleaner code
int rStrcmp(char *s1, char *s2)
{
    if (*s1 > *s2) return 1;
    if (*s1 < *s2) return -1;
    else{
        if (*s1 == '\0' && *s2 == '\0') return 0;
        *s1++; *s2++;
        if (*s1 != '\0' || *s2 != '\0')
            return 0 + rStrcmp(s1, s2);
    }
*/
}
