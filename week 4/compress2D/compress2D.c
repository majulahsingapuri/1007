//
//  main.c
//  compress2D
//
//  Created by Bhargav Singapuri on 4/2/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
#define SIZE 100

void compress2D(int data[SIZE][SIZE], int rowSize, int colSize);

int main() {
    int data[SIZE][SIZE];
    int i,j;
    int rowSize, colSize;
    printf("Enter the array size (rowSize, colSize): \n");
    scanf("%d %d", &rowSize, &colSize);
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i=0; i<rowSize; i++) {
        for (j=0; j<colSize; j++) {
            scanf("%d", &data[i][j]);
        }
    }
    printf("compress2D(): \n");
    compress2D(data, rowSize, colSize);
    return 0;
}
   
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize) {
   
    int currentNum, count;
    
    for (int i = 0; i < rowSize; i++) {
        currentNum = data[i][0];
        count = 0;
        for (int j = 0; j < colSize; j++) {
            if (data[i][j] == currentNum) {
                count++;
            } else {
                printf("%d %d ", currentNum, count);
                currentNum = data[i][j];
                count = 1;
            }
        }
        printf("%d %d \n", currentNum, count);
    }
    
}
