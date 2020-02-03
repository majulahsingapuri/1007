//
//  main.c
//  countEvenDigits
//
//  Created by Bhargav Singapuri on 30/1/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
      
int countEvenDigits1(int number);
void countEvenDigits2(int number, int *count);
    
int main() {
         
    int number, result;
    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("countEvenDigits2(): %d\n", countEvenDigits1(number));
    countEvenDigits2(number, &result);
    printf("countEvenDigits2(): %d\n", result);
    
    return 0;
}
      
int countEvenDigits1(int number) {
    int result = 0;
    int digit;
    
    while (number > 0) {
        digit = number % 10;
        number /= 10;
        
        switch (digit) {
            case 0:
                result++;
                break;
            case 2:
                result++;
                break;
            case 4:
                result++;
                break;
            case 6:
                result++;
                break;
            case 8:
                result++;
                break;
            default:
                break;
        }
    }
    
    return result;
}
      
void countEvenDigits2(int number, int *count) {
    int digit;
    *count = 0;
    
    while (number > 0) {
        digit = number % 10;
        number /= 10;
        
        switch (digit) {
            case 0:
                *count += 1;
                break;
            case 2:
                *count += 1;
                break;
            case 4:
                *count += 1;
                break;
            case 6:
                *count += 1;
                break;
            case 8:
                *count += 1;
                break;
            default:
                break;
        }
    }
}
