//
//  main.c
//  divide
//
//  Created by Bhargav Singapuri on 30/1/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
      
int divide1(int m, int n, int *r);
void divide2(int m, int n, int *q, int *r);

int main() {
    int m, n, q, r;

    printf("Enter two numbers (m and n): \n");
    scanf("%d %d", &m, &n);
    q = divide1(m, n, &r);
    printf("divide1(): quotient %d remainder %d\n", q, r);
    divide2(m, n, &q, &r);
    printf("divide2(): quotient %d remainder %d\n", q, r);

    return 0;
}
      
int divide1(int m, int n, int *r) {
    int q = 0;
    
    while (m >= n) {
        m -= n;
        q++;
    }
    *r = m;
    return q;
}
    
void divide2(int m, int n, int *q, int *r) {
}
