//
//  sumSqDigits.c
//  sumSqDigits
//
//  Created by Bhargav Singapuri on 30/1/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
      
int sumSqDigits1(int num);
void sumSqDigits2(int num, int *result);
      
int main() {

    int num, result;
    
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("sumSqDigits1(): %d\n", sumSqDigits1(num));
    sumSqDigits2(num, &result);
    printf("sumSqDigits2(): %d\n", result);
    
    return 0;
}
      
int sumSqDigits1(int num) {
    
    int result = 0;
    int digit;
    
    while (num > 0) {
        digit = num % 10;
        num /= 10;
        result += (digit * digit);
    }
    
    return result;
}
      
void sumSqDigits2(int num, int *result) {
    int digit;
    *result = 0;
    
    while (num > 0) {
        digit = num % 10;
        num /= 10;
        *result += (digit * digit);
    }

}
