//
//  main.c
//  findMinMaxStr
//
//  Created by Bhargav Singapuri on 10/2/20.
//  Copyright © 2020 Bhargav Singapuri. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define SIZE 10

void findMinMaxStr(char word[][40], char *first, char *last, int size);

int main() {
      
    char word[SIZE][40];
    char first[40], last[40];
    int i, size;
   
    printf("Enter size: \n");
    scanf("%d", &size);
    printf("Enter %d words: \n", size);
    for (i=0; i<size; i++)
        scanf("%s", word[i]);
    findMinMaxStr(word, first, last, size);
    printf("First word = %s, Last word = %s\n", first, last);
    
    return 0;
}
            
void findMinMaxStr(char word[][40], char *first, char *last, int size) {
    
    int _first = 0, _last = 0;

    for (int wordindex = 0; wordindex < size; wordindex++) {
        
        for (int str1index = 0; str1index < 40; str1index++) {
            if (word[_first][str1index] > word[wordindex][str1index]) {
                _first = wordindex;
                break;
            } else if (word[_first][str1index] < word[wordindex][str1index]){
                break;
            }
        }
        
        for (int str1index = 0; str1index < 40; str1index++) {
            if (word[_last][str1index] < word[wordindex][str1index]) {
                _last = wordindex;
                break;
            } else if (word[_last][str1index] > word[wordindex][str1index]) {
                break;
            }
        }
    }

    for (int i = 0; i < 40; i++) {
        *(first+i) = word[_first][i];
    }
    for (int i = 0; i < 40; i++) {
        *(last+i) = word[_last][i];
    }
}
