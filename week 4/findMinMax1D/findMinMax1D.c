//
//  main.c
//  findMinMax1D
//
//  Created by Bhargav Singapuri on 3/2/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
      
void findMinMax1D(int ar[], int size, int *min, int *max);

int main() {
    
    int i, size;
    int min, max;

    printf("Enter array size: \n");
    scanf("%d", &size);
    
    int ar[size];

    printf("Enter %d data: \n", size);
    
    for (i=0; i<size; i++){
        scanf("%d", &ar[i]);
    }
    
    findMinMax1D(ar, size, &min, &max);
    printf("min = %d; max = %d\n", min, max);
    
    return 0;
}
      
void findMinMax1D(int ar[], int size, int *min, int *max) {
    
    if (size == 1) {
        *max = ar[0];
        *min = ar[0];
        
        return;
    }
    
    if (ar[0] > ar[1]) {
        *max = ar[0];
        *min = ar[1];
    } else {
        *max = ar[1];
        *min = ar[0];
    }
    
    if (size == 2) {
        return;
    } else {
        for (int i = 2; i < size; i++) {
            if (ar[i] > *max) {
                *max = ar[i];
            } else if (ar[i] < *min){
                *min = ar[i];
            }
        }
    }
}
