//
//  main.c
//  rReverseAr
//
//  Created by Bhargav Singapuri on 25/2/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
      
void rReverseAr(int ar[], int size);
      
int main() {
         
    int array[80];
    int size, i;
    printf("Enter size: \n");
    scanf("%d", &size);
    printf("Enter %d numbers: \n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &array[i]);
    printf("rReverseAr(): ");
    rReverseAr(array, size);
    for (i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
    
    return 0;
}
      
void rReverseAr(int ar[], int size) {
    
    if (size == -1) {
        return;
    }
    
    int digit = ar[size - 1];
    
    rReverseAr(ar, size - 1);
    
    for (int i = size; i > 0; i--) {
        ar[i] = ar[i-1];
    }
    ar[0] = digit;
}
