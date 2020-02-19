//
//  main.c
//  findMiddleAge
//
//  Created by Bhargav Singapuri on 19/2/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
      
typedef struct {
    char name[20];
    int age;
} Person;

void readData(Person *p);
Person findMiddleAge(Person *p);
      
int main() {
         
    Person man[3], middle;
    readData(man);
    middle = findMiddleAge(man);
    printf("findMiddleAge(): %s %d\n", middle.name, middle.age);
    
    return 0;
}
      
void readData(Person *p) {
    for (int i = 0; i < 3; i++) {
        printf("Enter person %d: \n", (i+1));
        scanf("%s %d", p->name, &p->age);
        p++;
    }
}
      
Person findMiddleAge(Person *p) {
    
    if ((p[1].age > p[0].age && p[0].age > p[2].age) || (p[2].age > p[0].age && p[0].age > p[1].age)) {
        return p[0];
    } else if ((p[0].age > p[1].age && p[1].age > p[2].age) || (p[2].age > p[1].age && p[1].age > p[0].age)) {
        return p[1];
    } else {
        return p[2];
    }
}
