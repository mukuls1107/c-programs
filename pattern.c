/*
A
AB
ABC
ABCD
ABCDE
ABCDEF
*/


#include <stdio.h>

void main(){
    char i,j;
    for(i = 'A'; i <= 'F'; i++){
        for(j = 'A'; j <= i; j++){
            printf("%c",j);
        }
        printf("\n");
    }
}