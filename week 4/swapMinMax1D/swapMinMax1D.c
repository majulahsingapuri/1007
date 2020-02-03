//
//  main.c
//  swapMinMax1D
//
//  Created by Bhargav Singapuri on 3/2/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
      
void swapMinMax1D(int ar[], int size);
      
int main() {
        
    int i,size;
    
    printf("Enter array size: \n");
    scanf("%d", &size);
    int ar[size];
    
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++) {
        scanf("%d",ar+i);
    }
    
    swapMinMax1D(ar, size);
        
    printf("swapMinMax1D(): ");
    for (i=0; i<size; i++) {
        printf("%d ",*(ar+i));
    }
    return 0;
}
      
void swapMinMax1D(int ar[], int size) {
    
    int min, max;
    int *minPt, *maxPt;
    
    if (ar[0] > ar[1]) {
        max = ar[0];
        min = ar[1];
        maxPt = &ar[0];
        minPt = &ar[1];
    } else {
        max = ar[1];
        min = ar[0];
        maxPt = &ar[1];
        minPt = &ar[0];
    }
    
    if (size > 2) {
        for (int i = 2; i < size; i++) {
            if (ar[i] >= max) {
                max = ar[i];
                maxPt = &ar[i];
            }
            if (ar[i] <= min){
                min = ar[i];
                minPt = &ar[i];
            }
        }
    }
    
    int temp = *maxPt;
    *maxPt = *minPt;
    *minPt = temp;
}
