//
//  main.c
//  gcd
//
//  Created by Bhargav Singapuri on 31/1/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
   
int gcd1(int num1, int num2);
void gcd2(int num1, int num2, int *result);
   
int main() {
    
    int x,y,result=-1;
    printf("Enter 2 numbers: \n");
    scanf("%d %d", &x, &y);
    
    if (x < y) {
        int temp = x;
        x = y;
        y = temp;
    }
    
    printf("gcd1(): %d\n", gcd1(x, y));
    gcd2(x,y,&result);
    printf("gcd2(): %d\n", result);

    return 0;
}
   
int gcd1(int num1, int num2) {
    
    int remainder;
    
    do {
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    } while (remainder != 0);
    
    return num1;
}

void gcd2(int num1, int num2, int *result) {
    
    int remainder;
    
    do {
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    } while (remainder != 0);
    
    *result = num1;
}
