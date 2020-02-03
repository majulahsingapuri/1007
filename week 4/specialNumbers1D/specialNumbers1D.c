//
//  main.c
//  specialNumbers1D
//
//  Created by Bhargav Singapuri on 3/2/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
      
void specialNumbers1D(int ar[], int num, int *size);
      
int main() {
    
    int a[20],i,size=0,num;

    printf("Enter a number (between 100 and 999): \n");
    scanf("%d", &num);
    specialNumbers1D(a, num, &size);
    printf("specialNumbers1D(): ");
    
    for (i=0; i<size; i++) {
        printf("%d ",a[i]);
    }
    
    return 0;
}
      
void specialNumbers1D(int ar[], int num, int *size) {
    
    for (int i = 100; i <= num; i++) {
        
        int number = i, digits[3];
        
        for (int j = 0; j < 3; j++) {
            digits[j] = number % 10;
            number /= 10;
        }
        
        number = (digits[0] * digits[0] * digits[0]) + (digits[1] * digits[1] * digits[1]) + (digits[2] * digits[2] * digits[2]);
        
        if (number == i) {
            ar[*size] = number;
            *size += 1;
        }
        
    }
}
