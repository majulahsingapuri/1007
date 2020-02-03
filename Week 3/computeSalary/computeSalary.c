//
//  computeSalary.c
//  Week 3
//
//  Created by Bhargav Singapuri on 30/1/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
      
void readInput(int *id, int *noOfHours, int *payRate);
double computeSalary1(int noOfHours, int payRate);
void computeSalary2(int noOfHours, int payRate, double *grossPay);
      
int main() {

    int id = -1, noOfHours, payRate;
    double grossPay;
    
    readInput(&id, &noOfHours, &payRate);
    
    while (id != -1) {
        printf("computeSalary1(): ");
        grossPay = computeSalary1(noOfHours, payRate);
        printf("ID %d grossPay %.2f \n", id, grossPay);
        printf("computeSalary2(): ");
        computeSalary2(noOfHours, payRate, &grossPay);
        printf("ID %d grossPay %.2f \n", id, grossPay);
        readInput(&id, &noOfHours, &payRate);
      }

    return 0;
}
   
void readInput(int *id, int *noOfHours, int *payRate) {
    printf("Enter ID (-1 to end) : \n");
    scanf("%d", id);
    if (*id == -1) {
        return;
    }
    printf("Enter number of hours: \n");
    scanf("%d", noOfHours);
    printf("Enter hourly pay rate: \n");
    scanf("%d", payRate);
}

double computeSalary1(int noOfHours, int payRate) {
    double grossPay;
    
    if (noOfHours <= 160) {
        grossPay = noOfHours * payRate;
    } else {
        grossPay = (160 * payRate) + ((noOfHours - 160) * payRate * 1.5);
    }
    
    return grossPay;
}
   
void computeSalary2(int noOfHours, int payRate, double *grossPay) {
    if (noOfHours <= 160) {
        *grossPay = noOfHours * payRate;
    } else {
        *grossPay = (160 * payRate) + ((noOfHours - 160) * payRate * 1.5);
    }
}
