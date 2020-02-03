//
//  main.c
//  platform1D
//
//  Created by Bhargav Singapuri on 3/2/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
      
int platform1D(int ar[], int size);
      
int main() {
         
    int i,size;
    
    printf("Enter array size: \n");
    scanf("%d", &size);
    int b[size];
    
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++) {
        scanf("%d",&b[i]);
    }
    
    printf("platform1D(): %d\n", platform1D(b,size));
    
    return 0;
}
      
int platform1D(int ar[], int size) {
    int lengthFinal = 1, length = 1;
    
    for (int i = 0; i < size - 1; i++) {
        if (ar[i] == ar[i+1]) {
            length++;
        } else {
            if (length > lengthFinal) {
                lengthFinal = length;
                length = 1;
            }
        }
    }
    
    return lengthFinal;
}
