//
//  main.c
//  week 4
//
//  Created by Bhargav Singapuri on 3/2/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
#include <math.h>

float absoluteSum1D(int size, float vector[]);

int main() {
    
    int size;
    printf("Enter vector size: \n");
    scanf("%d", &size);
    
    float vector[size];
    printf("Enter %d data: \n", size);
    
    for (int i = 0; i < size; i++) {
        scanf("%f", &vector[i]);
    }
    
    printf("absoluteSum1D(): %.2f \n", absoluteSum1D(size, vector));
    
    return 0;
}
      
float absoluteSum1D(int size, float vector[]) {
    float sum = 0;
    
    for (int i = 0; i < size; i++) {
        sum += fabsf(vector[i]);
    }
    
    return sum;
}
