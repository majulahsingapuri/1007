//
//  main.c
//  extEvenDigits
//
//  Created by Bhargav Singapuri on 31/1/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
#define INIT_VALUE 999

int extEvenDigits1(int num);
void extEvenDigits2(int num, int *result);

int main() {
    
    int number, result = INIT_VALUE;
    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("extEvenDigits1(): %d\n", extEvenDigits1(number));
    extEvenDigits2(number, &result);
    printf("extEvenDigits2(): %d\n", result);

    return 0;
}
      
int extEvenDigits1(int num) {
    
    int digit, newNum = 0, result = 0;
    
    while (num > 0) {
        digit = num % 10;
        num /= 10;
        
        if (digit % 2 == 0) {
            newNum *= 10;
            newNum += digit;
        }
    }
    
    if (newNum == 0) {
        return -1;
    } else {
        while (newNum > 0) {
            result = (result * 10) + (newNum % 10);
            newNum /= 10;
        }
        return result;
    }
}
      
void extEvenDigits2(int num, int *result) {
    int digit, newNum = 0;
    *result = 0;
    
    while (num > 0) {
        digit = num % 10;
        num /= 10;
        
        if (digit % 2 == 0) {
            newNum *= 10;
            newNum += digit;
        }
    }
    
    if (newNum == 0) {
        *result = -1;
    } else {
        while (newNum > 0) {
            *result = (*result * 10) + (newNum % 10);
            newNum /= 10;
        }
    }
}
