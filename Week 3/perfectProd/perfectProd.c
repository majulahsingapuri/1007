//
//  main.c
//  perfectProd
//
//  Created by Bhargav Singapuri on 31/1/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
   
int perfectProd1(int num);
void perfectProd2(int num, int *prod);

int main() {
    
    int number, result=0;
    
    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("Calling perfectProd1() \n");
    printf("perfectProd1(): %d\n", perfectProd1(number));
    printf("Calling perfectProd2() \n");
    perfectProd2(number, &result);
    printf("perfectProd2(): %d\n", result);
    
    return 0;
}
  
int perfectProd1(int num) {
    
    int product = 1;
    
    for (int i = 1; i < num; i++) {
        int sum = 0;
        for (int j = 1; j <= i/2; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            printf("Perfect number: %d \n", i);
            product *= i;
        }
    }
    
    return product;
    
}
   
void perfectProd2(int num, int *prod) {
    
    int product = 1;
    
    for (int i = 1; i < num; i++) {
        int sum = 0;
        for (int j = 1; j <= i/2; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            printf("Perfect number: %d \n", i);
            product *= i;
        }
    }
    
    *prod = product;
}
