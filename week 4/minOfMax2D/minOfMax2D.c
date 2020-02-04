//
//  main.c
//  minOfMax2D
//
//  Created by Bhargav Singapuri on 4/2/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
#include <limits.h>
/* Note the use of limits header for INT_MAX purposes */
#define SIZE 10

int minOfMax2D(int ar[][SIZE], int rowSize, int colSize);

int main() {
    int ar[SIZE][SIZE], rowSize, colSize;
    int i,j,min;
    
    printf("Enter row size of the 2D array: \n");
    scanf("%d", &rowSize);
    printf("Enter column size of the 2D array: \n");
    scanf("%d", &colSize);
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i=0; i<rowSize; i++) {
        for (j=0; j<colSize; j++) {
            scanf("%d", &ar[i][j]);
        }
    }
    min=minOfMax2D(ar, rowSize, colSize);
    printf("minOfMax2D(): %d\n", min);
    
    return 0;
}
       
int minOfMax2D(int ar[][SIZE], int rowSize, int colSize) {
    int min = INT_MAX;
    
    for (int i = 0; i < rowSize; i++) {
        int rowMax = ar[i][0];
        for (int j = 1; j < colSize; j++) {
            if (ar[i][j] > rowMax) {
                rowMax = ar[i][j];
            }
        }
        if (rowMax < min) {
            min = rowMax;
        }
    }
    
    return min;
}
