//
//  main.c
//  rCountEvenDigits
//
//  Created by Bhargav Singapuri on 25/2/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
      
int rCountEvenDigits1(int num);
void rCountEvenDigits2(int num, int *result);
      
int main() {
         
    int number, result;
    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("rCountEvenDigits1(): %d\n", rCountEvenDigits1(number));
    
    rCountEvenDigits2(number, &result);
    printf("rCountEvenDigits2(): %d\n", result);

    return 0;
}
      
int rCountEvenDigits1(int num) {
    
    if (num == 0) {
        return 0;
    }
    
    if ((num % 10) % 2 == 0) {
        return 1 + rCountEvenDigits1(num/10);
    } else {
        return rCountEvenDigits1(num/10);
    }
}
      
void rCountEvenDigits2(int num, int *result) {
    
    if (num == 0) {
        *result = 0;
        return;
    }
    
    rCountEvenDigits2(num/10, result);
    if ((num % 10) % 2 == 0) {
        *result += 1;
    }
}
