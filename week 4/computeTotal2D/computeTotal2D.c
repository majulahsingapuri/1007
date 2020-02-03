//
//  main.c
//  computeTotal2D
//
//  Created by Bhargav Singapuri on 3/2/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
#define SIZE 4

void computeTotal2D(int matrix[SIZE][SIZE]);

int main() {

    int a[SIZE][SIZE];
    int i,j;
    
    printf("Enter the matrix data (%dx%d): \n", SIZE, SIZE);
    for (i=0; i<SIZE; i++) {
        for (j=0; j<SIZE; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("computeTotal2D(): \n");
    computeTotal2D(a);
    
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
   
void computeTotal2D(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < 4; i++) {
        matrix[i][3] = matrix[i][0] + matrix[i][1] + matrix[i][2];
    }
}
