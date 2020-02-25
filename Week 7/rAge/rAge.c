//
//  rAge.c
//  Week 7
//
//  Created by Bhargav Singapuri on 25/2/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
      
int rAge(int studRank);
    
int main() {
         
    int studRank;
    printf("Enter student rank: \n");
    scanf("%d",&studRank);
    printf("rAge(): %d\n", rAge(studRank));
    
    return 0;
}
      
int rAge(int studRank) {
    
    if (studRank == 1) {
        return 10;
    } else {
        return 2 + rAge(studRank - 1);
    }
}
