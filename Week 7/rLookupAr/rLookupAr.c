//
//  main.c
//  rLookupAr
//
//  Created by Bhargav Singapuri on 25/2/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
      
int rLookupAr(int array[], int size, int target);
     
int main() {
    
    int numArray[80];
    int target, i, size;
    int result=-999;
    
    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d numbers: \n", size);
    for (i=0; i < size; i++)
        scanf("%d", &numArray[i]);
    printf("Enter the target number: \n");
    scanf("%d", &target);
    result = rLookupAr(numArray, size, target);
    printf("rLookupAr(): %d", result);
    
    return 0;
}
      
int rLookupAr(int array[], int size, int target) {
    
    if (size == -1) {
        return -1;
    }
    
    int result = rLookupAr(array, size - 1, target);
    
    if (array[size] == target) {
        return size;
    } else {
        return result;
    }
}
