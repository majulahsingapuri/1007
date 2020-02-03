//
//  main.c
//  find2Max1D
//
//  Created by Bhargav Singapuri on 3/2/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
      
void find2Max1D(int ar[], int size, int *max1, int *max2);
      
int main() {
         
    int max1, max2, size;
    
    printf("Enter array size: \n");
    scanf("%d", &size);
    
    int ar[size];
    printf("Enter %d data: \n", size);
    
    for (int i = 0; i < size; i++) {
        scanf("%d", &ar[i]);
    }
    
    find2Max1D(ar,size,&max1,&max2);
    printf("Max1: %d\nMax2: %d\n",max1,max2);
    
    return 0;
}
      
void find2Max1D(int ar[], int size, int *max1, int *max2) {
    
    if (ar[0] > ar[1]) {
        *max1 = ar[0];
        *max2 = ar[1];
    } else {
        *max1 = ar[1];
        *max2 = ar[0];
    }
    
    if (size == 2) {
        return;
    } else {
        for (int i = 2; i < size; i++) {
            if (ar[i] > *max2) {
                *max2 = ar[i];
                if (ar[i] > *max1) {
                    *max2 = *max1;
                    *max1 = ar[i];
                }
            }
        }
    }
}
