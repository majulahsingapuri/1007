//
//  main.c
//  longestStrInAr
//
//  Created by Bhargav Singapuri on 10/2/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define N 20

char *longestStrInAr(char str[N][40], int size, int *length);

int main() {
       
    int i, size, length;
    char str[N][40], *p, *result;
    char dummychar;
    
    printf("Enter array size: \n");
    scanf("%d", &size);
    scanf("%c", &dummychar);
    for (i=0; i<size; i++) {
        printf("Enter string %d: \n", i+1);
        fgets(str[i], 40, stdin);
        
        if (p=strchr(str[i],'\n'))
            *p = '\0';
    }
    
    result = longestStrInAr(str, size, &length);
    printf("longest: %s \nlength: %d\n",result, length);
    
    return 0;
}
        
char *longestStrInAr(char str[N][40], int size, int *length) {
    
    char *longestWord = str[0];
    *length = strlen(str[0]);
    int currentLength;
    
    for (int i = 0; i < size; i++) {
        currentLength = strlen(str[i]);
        if (currentLength > *length) {
            *length = currentLength;
            longestWord = str[i];
        }
    }
    
    return longestWord;
}
