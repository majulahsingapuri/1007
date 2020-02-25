//
//  main.c
//  rAllEvenDigits
//
//  Created by Bhargav Singapuri on 25/2/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
#define INIT_VALUE 999

int rAllEvenDigits1(int num);
void rAllEvenDigits2(int num, int *result);

int main() {
    
    int number, result=INIT_VALUE;
    printf("Enter a number: \n");
    scanf("%d", &number);
    result = rAllEvenDigits1(number);
    if (result == 1)
        printf("rAllEvenDigits1(): yes\n");
    else if (result == 0)
        printf("rAllEvenDigits1(): no\n");
    else
        printf("rAllevenDigits1(): error\n");
    result=INIT_VALUE;
    
    rAllEvenDigits2(number, &result);
    if (result == 1)
        printf("rAllEvenDigits2(): yes\n");
    else if (result == 0)
        printf("rAllEvenDigits2(): no\n");
    else
        printf("rAllevenDigits2(): error\n");
    
    return 0;
}
          
int rAllEvenDigits1(int num) {
    
    if (num == 0) {
        return 1;
    }
    
    int result = rAllEvenDigits1(num/10);
    
    if (result == 0) {
        return 0;
    } else {
        if ((num % 10) % 2 == 0) {
            return 1;
        } else {
            return 0;
        }
    }
}
          
void rAllEvenDigits2(int num, int *result) {

    if (num == 0) {
        *result = 1;
        return;
    }
    
    rAllEvenDigits2(num/10, result);
    
    if (*result != 0) {
        if ((num % 10) % 2 == 0) {
            *result = 1;
        } else {
            *result = 0;
        }
    }
}
